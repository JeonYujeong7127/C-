#include "concert.h"
#include <iostream>
using namespace std;

//concert::concert(const string& name, const int& capacity)
//	:name(name), capacity(capacity), rList(new string[capacity])
concert::concert(const string& name, const int& capacity)
	:name(name), capacity(capacity), rList(make_unique<string[]>(capacity))
{
	cout << "������" << endl;
}

concert::concert(const concert& concert)
	:concert(concert.name, concert.capacity)
{
	cout << "���� ���� ������" << endl;
	num = concert.num;
	for (size_t i = 0; i < num; i++)
		rList[i] = concert.rList[i];
}

concert::concert(concert&& concert) noexcept
	:name(concert.name), capacity(concert.capacity), rList(move(concert.rList)), num(concert.num)
{
	cout << "�̵� ������" << endl;
	concert.num = 0;
	concert.rList = nullptr; //��� ��� ��
}

concert::~concert()
{
	cout << "�Ҹ���" << endl;
}

void concert::reservation()
{
	if (!full() && rList != nullptr) {
		cout << "������ �̸��� �Է��ϼ���: ";
		cin >> rList[num++];
		cout << "������ �Ϸ�Ǿ����ϴ�." << endl;
	}
	else {
		cout << "�ܼ�Ʈ ������ ����Ǿ����ϴ�." << endl;
	}
}

bool concert::full() const
{
	return capacity == num;
}

int concert::getCapacity() const
{
	return capacity;
}

int concert::getNum() const
{
	return num;
}

void concert::show() const
{
	cout << "�ܼ�Ʈ��: " << name << endl;
	cout << "���� ��: " << num << endl;
	cout << "������ ����Ʈ" << endl;
	cout << "================" << endl;
	for (size_t i = 0; i < num; i++) {
		cout << rList[i] << endl;
	}
	cout << "================" << endl;
}
