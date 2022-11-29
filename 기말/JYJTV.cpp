#include "JYJTV.h"

JYJTV::JYJTV()
{
}

JYJTV::JYJTV(string num, string category, int count, int price, string company, string model, int size)
	:JYJProduct(num, category, count, price), company(company), model(model), size(size)
{
}

JYJTV::~JYJTV()
{
}

void JYJTV::join(string name)
{
	customer.push_back(name);
}

bool JYJTV::operator==(string& model)
{
	return model == this->model;
}

void JYJTV::show()
{
	JYJProduct::show();
	cout << "-----------------------------" << endl;
	cout << "제조회사: " << company << endl;
	cout << "제품모델: " << model << endl;
	cout << "화면크기: " << size << endl;
}

ostream& operator<<(ostream& out, JYJTV& tv)
{
	JYJTV* temp_ptr = &tv;
	temp_ptr->show();
	return out;
}
