#pragma once
#include "JYJTV.h"
#include "JYJClothing.h"

class JYJManager
{
private:
	string managername = "0";
	vector<JYJProduct*> item;
public:
	JYJManager();
	~JYJManager();
	JYJManager(string managername);
	void additem(JYJTV* tv);
	void additem(JYJClothing *clothing);
	vector<JYJProduct*> getItems();
};

