#include <iostream>
#include "concert.h"
using namespace std;

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//cout << "===============" << endl;
	//concert concert1("아이유 콘서트", 5);
	//concert1.reservation();
	//concert1.show();
	//
	//cout << "=== 복사 생성자 ===" << endl;
	//concert concert2(concert1);
	//concert2.show();

	//cout << "=== 이동 생성자 ===" << endl;
	//concert concert3(move(concert1));
	//concert3.show();

	//cout << "=== 더블 포인터 ===" << endl;

	//concert** manager1 = new concert * [5]; //빈 방, new concert[5]는 디폴트
	//manager1[0] = new concert("A콘서트", 3);
	//manager1[0] = new concert("B콘서트", 2);
	//manager1[0]->reservation();
	//manager1[0]->show();
	//delete manager1[0];
	//delete manager1[1];
	//delete[] manager1;
	//manager1 = nullptr;

	/*cout << "=== 유니크 포인터 ===" << endl;

	unique_ptr<unique_ptr<concert>[]> manager1 = make_unique < unique_ptr<concert>[]>(5);

	manager1[0] = make_unique<concert>("A콘서트", 3);
	manager1[0] = make_unique<concert>("B콘서트", 2);
	manager1[0]->reservation();
	manager1[0]->show();*/

	cout << "=== shared 포인터 ===" << endl;

	shared_ptr<shared_ptr<concert>[]> manager1(new shared_ptr<concert>[5]);

	manager1[0] = make_shared<concert>("A콘서트", 3);
	manager1[0] = make_shared<concert>("B콘서트", 2);
	manager1[0]->reservation();
	manager1[0]->show();
}