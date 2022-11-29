#pragma once
#include <iostream>
#include "JYJClient.h"
using namespace std;

class JYJItem
{
private:
	string iname;
	int count;
	int num = 0;
	shared_ptr<JYJClient[]> list;

public:
	JYJItem() = delete;
	JYJItem(string iname, int count);
	JYJItem(const JYJItem& iname);
	JYJItem(JYJItem&& iname) noexcept;
	void join(JYJClient(string name, int cost));
	void showItem();
};

