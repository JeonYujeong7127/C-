#include "JYJItem.h"
#include "JYJClient.h"
#include <iostream>
using namespace std;
 
JYJItem::JYJItem(string iname, int count)
	: iname(iname), count(count), num(0), list(nullptr)
{
	cout << "생성자" << endl;
}

JYJItem::JYJItem(const JYJItem& item)
	:JYJItem(item.iname, item.count)
{
	cout << "복사 생성자" << endl;
}
 

JYJItem::JYJItem(JYJItem&& item) noexcept
	:iname(item.iname), count(item.count), list(move(item.list))
{
	cout << "이동 생성자" << endl;
	item.list = nullptr;
}
 
void JYJItem::showItem()
{
	cout << "품목명: " << this->iname << endl;
	cout << "판매대수: " << this->count << endl;
	cout << "참여자 수: " << this->count << endl;
	cout << "=====================" << endl;
	for (size_t i = 0; i <= num; i++) {
		cout << "이름: " << this->list[i].getName() << endl;
		cout << "입찰액: " << this->list[i].getCost() << endl;
		cout << "=====================" << endl;
	}
	
}

void JYJItem::join(JYJClient(string name, int cost))
{
	if(num = count) {
		//list[num] = JYJClient();
		num++;
		cout << "경매에 참가했습니다" << endl;
	}
	else {
		cout << "경매에 참가하지 못했습니다" << endl;
	}
}



