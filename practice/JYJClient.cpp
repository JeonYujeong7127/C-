#include "JYJClient.h"
#include <iostream>
using namespace std;

JYJClient::JYJClient(string name, int cost)
	: name(name), cost(cost)
{
	cout << "생성자" << endl;
}

string JYJClient::getName()
{
	return name;
}

int JYJClient::getCost()
{
	return cost;
}

void JYJClient::showClient()
{
	cout << "이름: " << name << endl;
	cout << "입찰금액: " << cost<< endl;
}
