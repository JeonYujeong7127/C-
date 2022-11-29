#include "JYJProduct.h"

JYJProduct::JYJProduct()
{
}

JYJProduct::JYJProduct(string num, string category, int cnt, int price)
	: num(num), category(category), cnt(cnt), price(price)
{
}

string JYJProduct::getCategory()
{
	return category;
}

int JYJProduct::getPrice()
{
	return this->price;
}

void JYJProduct::show()
{
	cout << "-----------------------------" << endl;
	cout << "��Ϲ�ȣ: " << num << endl;
	cout << "��ǰ����: " << category << endl;
	cout << "��ǰ����: " << cnt << endl;
	cout << "����: " << price << endl;
	cout << "-----------------------------" << endl;
	cout << "���� ������" << endl;
	cout << "-----------------------------" << endl;
	for (vector<string>::iterator it = customer.begin(); it != customer.end(); it++) {
		cout << *it << endl;
	}
}

bool JYJProduct::operator==(string& category)
{
	return category == this->category;
}

bool JYJProduct::operator<(const int& price)
{
	return this->price < price;
}

ostream& operator<<(ostream& out, JYJProduct& product)
{
	JYJProduct* temp_ptr = &product;
	temp_ptr->show();
	return out;
}
