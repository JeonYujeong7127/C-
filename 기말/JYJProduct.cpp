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
	cout << "등록번호: " << num << endl;
	cout << "제품유형: " << category << endl;
	cout << "제품개수: " << cnt << endl;
	cout << "가격: " << price << endl;
	cout << "-----------------------------" << endl;
	cout << "구매 참여자" << endl;
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
