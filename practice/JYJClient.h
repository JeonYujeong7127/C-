#pragma once
#include <iostream>
using std::string;
class JYJClient
{
private:
	string name;
	int cost;
public:
	JYJClient() = delete;
	JYJClient(string name, int cost);
	string getName();
	int getCost();
	void showClient();
};

