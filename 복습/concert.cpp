#include "concert.h"
#include <iostream>
using namespace std;

//concert::concert(const string& name, const int& capacity)
//	:name(name), capacity(capacity), rList(new string[capacity])
concert::concert(const string& name, const int& capacity)
	:name(name), capacity(capacity), rList(make_unique<string[]>(capacity))
{
	cout << "생성자" << endl;
}

concert::concert(const concert& concert)
	:concert(concert.name, concert.capacity)
{
	cout << "깊은 복사 생성자" << endl;
	num = concert.num;
	for (size_t i = 0; i < num; i++)
		rList[i] = concert.rList[i];
}

concert::concert(concert&& concert) noexcept
	:name(concert.name), capacity(concert.capacity), rList(move(concert.rList)), num(concert.num)
{
	cout << "이동 생성자" << endl;
	concert.num = 0;
	concert.rList = nullptr; //비워 줘야 함
}

concert::~concert()
{
	cout << "소멸자" << endl;
}

void concert::reservation()
{
	if (!full() && rList != nullptr) {
		cout << "예약자 이름을 입력하세요: ";
		cin >> rList[num++];
		cout << "예약이 완료되었습니다." << endl;
	}
	else {
		cout << "콘서트 예약이 종료되었습니다." << endl;
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
	cout << "콘서트명: " << name << endl;
	cout << "예약 수: " << num << endl;
	cout << "예약자 리스트" << endl;
	cout << "================" << endl;
	for (size_t i = 0; i < num; i++) {
		cout << rList[i] << endl;
	}
	cout << "================" << endl;
}
