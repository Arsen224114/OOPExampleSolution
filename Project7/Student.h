#pragma once
#include "main.h"

class Student {
public:
	string firstname;
	string surname;
	int age;
	int _class;
	double mark;
	char gender;
	bool alive;
	int size;
	string* subjects;

	//defualt_constructor
	Student() : Student("no name", "no surname") {
		cout << "defoult constructor" << endl;
		//cout << "defualt_constructor" << endl;
		
	}

	//defualt with arguments
	Student() : Student("no name", "no surname") {
		//cout << "defoult constructor" << endl;
	}

	Student(string name, string sname) : firstname(firstname),
		surname(surname), age(0), _class(0), gender('m'), alive(false),
		mark(0) {
		//cout << "defualt with arguments" << endl;
		
	}

	Student(string firstname, string surname, int age): Student(firstname, 
		surname, age, 0, 'm', true, 4) {
		//cout << "defualt with arguments" << endl;
		
	}

	//canonical constructor
	Student(string firstname, string surname, int age) : Student(firstname, surname, age,
		int _class, char gender, bool alive, double mark) {
		//cout << "canonical constructor" << endl;
		this->firstname = firstname;
		this->surname = surname;
		age = age;
		_class = _class;
		gender = gender;
		alive = alive;
		mark = mark;
	}
		


	// copy-constructor
	Student(const Student& student) : Student(student.firstname,
		student.surname, student.age, student._class, student.gender,
		student.alive, student.mark, student.size, student.subjects) {
		//cout << "canonical constructor" << endl;

	}
	

	~Student() {
		cout << "destructor" << endl;
		if (subjects != nullptr) {
			delete[] subjects;
		}
	}

	string toString() {
		string s = firstname;
		s += " " + surname;
		s += ", age = " + to_string(age);
		s += ", class = " + to_string(_class);
		s += ", gender = " + to_string(gender);
		s += ", is alive - ";
		s += (alive ? "yes" : "no");
		s += ", average mark = " + to_string(mark);
		return s;
	}
};