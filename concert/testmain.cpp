#include "Concert.h"
#include <iostream>
using namespace std;
#ifdef _DEBUG
#ifndef DBG_NEW
#define DBG_NEW new (_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DBG_NEW
#endif // !DBG_NEW
#endif

int main() {
	_CrtSetDbgFlag( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//cout << "===================" << endl;
	//Concert concert1("아이유 콘서트", 5);
	//concert1.reservation();
	//concert1.reservation();


	//cout << "=== 복사 생성자 ===" << endl;
	//Concert concert2(concert1);
	//concert2.show();

	//cout << "=== 이동 생성자 ===" << endl;
	//Concert concert3(move(concert1)); //lvalue 객체를 rvalue 객체로
	//concert3.show();


	//Concert** manager1 = new Concert * [5]; //빈방 new Concert[5]랑 다름
	//unique_ptr<unique_ptr<Concert>[]> manager1 = make_unique < unique_ptr<Concert>[]>(5);
	shared_ptr<shared_ptr<Concert>[]> manager1(new shared_ptr<Concert>[5]);

	manager1[0] = make_shared<Concert>("A콘서트", 3);
	manager1[1] = make_shared<Concert>("B콘서트", 3);
	manager1[0]->reservation();
	manager1[0]->show();
	manager1 = nullptr;

}