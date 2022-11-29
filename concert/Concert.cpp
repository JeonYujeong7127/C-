#include "Concert.h"
#include <iostream>
using namespace std;

Concert::Concert(const string& name, const int& capacity)
	: name(name), capacity(capacity), rList(new string[capacity])
{
	cout << "생성자" << endl;
}

Concert::Concert(const Concert& concert) //깊은 복사
	: Concert(concert.name, concert.capacity)
{
	cout << "복사 생성자" << endl;
	num = concert.num;
	for (size_t i = 0; i < num; i++) {
		rList[i] = concert.rList[i];
	}
}

Concert::Concert(Concert&& concert) noexcept //얕은 복사
	: name(concert.name), capacity(concert.capacity), rList(concert.rList), num(concert.num)
{
	cout << "이동 생성자" << endl;
	concert.num = 0;
	concert.rList = nullptr; //얘 중요 !!
}

Concert::~Concert()
{
	cout << name << " 소멸자" << endl;
	if (rList != nullptr)
		delete[] rList;
	rList = nullptr;
}

void Concert::reservation()
{
	if (!full() && rList != nullptr) {
		cout << "예약자의 이름을 입력하세요: ";
		cin >> rList[num++];
		cout << "예약이 완료되었습니다." << endl;
	}
	else {
		cout << "콘서트 예약이 종료되었습니다." << endl;
	}
}

bool Concert::full() const
{
	return capacity == num;
}

int Concert::getCapacity() const
{
	return capacity;
}

int Concert::getNum() const
{
	return num;
}

void Concert::show() const
{
	cout << "콘서트명: " << name << endl;
	cout << "예약 수: " << num << endl;
	cout << "예약자 리스트" << endl;
	cout << "========================" << endl;
	for (size_t i = 0; i <= num; i++) {
		cout << rList[i] << endl;
	}
	cout << "========================" << endl;
}
