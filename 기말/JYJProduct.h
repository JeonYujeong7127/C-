#pragma once
#include <iostream>
#include <vector>
using namespace std;

class JYJProduct
{
protected:
	int cnt = 0; //제품개수
	const int price = 0; //제품가격
	string num = "aaa"; //등록번호
	string category = "aaa"; //제품유형
	
public:
	vector<string> customer; //구매자 벡터
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

