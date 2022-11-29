#pragma once
#include "Dice.h"
#include<string>
using std::string;

class Player
{
private:
	string name;
	int total = 0;
public:
	string getName();
	void roll(Dice& dice1, Dice& dice2);
	int getTotal();
	Player(const string& pName);
};

