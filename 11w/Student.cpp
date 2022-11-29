#include "Student.h"

Student::Student()
{
	score = 0;
}

Student::~Student()
{
}

Student::Student(const string& name, const int& score)
	:name(name), score(score)
{
}

string Student::getName() const
{
	return name;
}

int Student::getScore() const
{
	return score;
}

bool Student::operator==(Student s)
{
	if (name == s.getName() && score == s.getScore())
		return true;
	else
		return false;
}

bool Student::operator==(string s)
{
	if (name == s)
		return true;
	else
		return false;
}

ostream& operator<<(ostream& out, const Student s)
{
	out << s.getName() << " " << s.getScore();
	return out;
}
