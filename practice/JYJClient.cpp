#include "JYJClient.h"
#include <iostream>
using namespace std;

JYJClient::JYJClient(string name, int cost)
	: name(name), cost(cost)
{
	cout << "������" << endl;
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
	cout << "�̸�: " << name << endl;
	cout << "�����ݾ�: " << cost<< endl;
}
