#include "JYJClothing.h"

JYJClothing::JYJClothing()
{
}

JYJClothing::JYJClothing(string num, string category, int count, int price, string gender, string clothname, string clothsize)
	:JYJProduct(num, category, count, price), gender(gender), clothname(clothname), clothsize(clothsize)
{
}

JYJClothing::~JYJClothing()
{
}

void JYJClothing::join(string name)
{
	customer.push_back(name);
}

void JYJClothing::show()
{
	JYJProduct::show();
	cout << "-----------------------------" << endl;
	cout << "성별유형: " << gender << endl;
	cout << "옷  이름: " << clothname << endl;
	cout << "옷사이즈: " << clothsize << endl;
}

bool JYJClothing::operator==(string& clothname)
{
	return clothname == this->clothname;
}

string JYJClothing::getClothname() const
{
	return clothname;
}

ostream& operator<<(ostream& out, JYJClothing clothing)
{
	JYJClothing* temp_ptr = &clothing;
	temp_ptr->show();
	return out;
}