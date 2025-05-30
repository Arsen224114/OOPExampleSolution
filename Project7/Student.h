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

	//defualt_constructor
	Student() {
		//cout << "defualt_constructor" << endl;
		firstname = "no name";
		surname = "nu surname";
		age = 0;
		_class = 0;
		gender = 'm';
		alive = false;
		mark = 4;
	}

	//defualt with arguments
	Student(string name, string sname) {
		//cout << "defualt with arguments" << endl;
		firstname = name;
		surname = sname;
		age = 0;
		_class = 0;
		gender = 'm';
		alive = false;
		mark = 4;
	}

	Student(string name, string sname, int a) {
		//cout << "defualt with arguments" << endl;
		firstname = name;
		surname = sname;
		age = a;
		_class = 0;
		gender = 'm';
		alive = false;
		mark = 4;
	}

	//canonical constructor
	Student(string name, string sname, int a, int cl, char g, bool al, double m) {
		//cout << "canonical constructor" << endl;
		firstname = name;
		surname = sname;
		age = a;
		_class = cl;
		gender = g;
		alive = al;
		mark = m;
	}

	// copy-constructor
	Student(const Student& student) {
		firstname = student.firstname;
		surname = student.surname;
		age = student.age;
		_class = student._class;
		gender = student.gender;
		alive = student.alive;
		mark = student.mark;
	}

	~Student() {
		cout << "destructor" << endl;
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