#include "JYJManager.h"
#define _CRTDBG_MAP_ALLOC
#include  <stdlib.h>
#include <crtdbg.h>
JYJManager::JYJManager()
{
}

JYJManager::~JYJManager()
{
	for (int i = 0; i < item.size(); i++)
		delete item[i];
}

JYJManager::JYJManager(string managername)
	:managername(managername)
{
}

void JYJManager::additem(JYJTV* tv)
{
	item.push_back(tv);
	tv = nullptr;
}

void JYJManager::additem(JYJClothing* clothing)
{
	item.push_back(clothing);
	clothing = nullptr;
}

vector<JYJProduct*> JYJManager::getItems()
{
	return item;
}