#pragma once
#include <iostream>
#include <vector>
using namespace std;

class JYJProduct
{
protected:
	int cnt = 0; //��ǰ����
	const int price = 0; //��ǰ����
	string num = "aaa"; //��Ϲ�ȣ
	string category = "aaa"; //��ǰ����
	
public:
	vector<string> customer; //������ ����
	JYJProduct();
	JYJProduct(string num, string category, int cnt, int price);
	string getCategory();
	int getPrice();
	virtual ~JYJProduct() = default;
	virtual void join(string name) = 0;
	virtual void show();
	friend ostream& operator<<(ostream& out, JYJProduct& product);
	bool operator==(string& category);
	bool operator<(const int& price);
};

