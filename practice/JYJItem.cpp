#include "JYJItem.h"
#include "JYJClient.h"
#include <iostream>
using namespace std;
 
JYJItem::JYJItem(string iname, int count)
	: iname(iname), count(count), num(0), list(nullptr)
{
	cout << "������" << endl;
}

JYJItem::JYJItem(const JYJItem& item)
	:JYJItem(item.iname, item.count)
{
	cout << "���� ������" << endl;
}
 

JYJItem::JYJItem(JYJItem&& item) noexcept
	:iname(item.iname), count(item.count), list(move(item.list))
{
	cout << "�̵� ������" << endl;
	item.list = nullptr;
}
 
void JYJItem::showItem()
{
	cout << "ǰ���: " << this->iname << endl;
	cout << "�ǸŴ��: " << this->count << endl;
	cout << "������ ��: " << this->count << endl;
	cout << "=====================" << endl;
	for (size_t i = 0; i <= num; i++) {
		cout << "�̸�: " << this->list[i].getName() << endl;
		cout << "������: " << this->list[i].getCost() << endl;
		cout << "=====================" << endl;
	}
	
}

void JYJItem::join(JYJClient(string name, int cost))
{
	if(num = count) {
		//list[num] = JYJClient();
		num++;
		cout << "��ſ� �����߽��ϴ�" << endl;
	}
	else {
		cout << "��ſ� �������� ���߽��ϴ�" << endl;
	}
}



