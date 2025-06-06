#pragma once
#include "Student.h"

class inicalaizer {
public:
	void init(Student* students, int size) {
		const int name_size = 10;

		const string names[]{ "Alex", "Danik", "Max", "Nikita", "Arseniy",
			"Arina", "Lina", "Anton", "Vera", "Ivan" };
		int maxAge = 18;
		int minAge = 13;

		int maxMark = 10;
		int minMark = 4;

		int maxClass = 11;
		int minClass = 7;

		for (int i = 0; i < size; i++)
		{
			Student temp;
			temp.firstname = names[rand() % nameSize];
			temp.surname = tolower((char)(rand() % ('Z' - 'A' + 1) + 'A')) + ".";
			temp.alive = true;
			temp.age = rand() % (maxAge - minAge + 1) + minAge;
			temp.gender = 'm';
		}
	}





};