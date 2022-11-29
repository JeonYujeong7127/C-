#pragma once
#include <iostream>
#include "Product.h"
#include <vector>
using namespace std;


class Customer2
{
private:
	string m_name;
	int m_number = 0;
	int m_count = 0;
	//unique_ptr<unique_ptr<Product>[]> items;
	vector<unique_ptr<Product>> items;
public:
	Customer2(const string& name, const int& number);
	~Customer2();
	void buy(unique_ptr<Product> item);
	string getName() const;
	int getCount() const;
	void showlist() const;
	void showTVlist() const;
	void showVegetablelist() const;
};

