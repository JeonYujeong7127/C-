#pragma once
#include <iostream>
#include "Product.h"
using namespace std;


class Customer
{
private:
	string m_name;
	int m_number = 0;
	int m_count = 0;
	Product** items; //자식 객체가 온전히 살아 있어야 해서 포인터
public:
	Customer(const string& name, const int& number);
	~Customer();
	void buy(Product* item);
	string getName() const;
	int getCount() const;
	void showlist() const;
};

