#pragma once
#include <iostream>
using std::string;

class concert
{
private:
	string name;
	int capacity;
	int num = 0;
	//string* rList = nullptr;
	//shared_ptr<string[]> rList = nullptr;
	unique_ptr<string[]> rList = nullptr;
public:
	concert() = delete;
	concert(const string& name, const int& capacity = 10);
	concert(const concert& concert); //���� ������
	concert(concert&& concert) noexcept; //�̵� ������
	~concert();
	void reservation();
	bool full() const;
	int getCapacity() const;
	int getNum() const;
	void show() const;
};

