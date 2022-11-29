#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	int score;
public:
	Student();
	~Student();
	Student(const string& name, const int& score);
	string getName() const;
	int getScore() const;
	bool operator== (Student s);
	bool operator== (string s);
};

ostream& operator<< (ostream& out, const Student s);