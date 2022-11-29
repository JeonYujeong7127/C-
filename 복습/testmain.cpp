#include <iostream>
#include "concert.h"
using namespace std;

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//cout << "===============" << endl;
	//concert concert1("������ �ܼ�Ʈ", 5);
	//concert1.reservation();
	//concert1.show();
	//
	//cout << "=== ���� ������ ===" << endl;
	//concert concert2(concert1);
	//concert2.show();

	//cout << "=== �̵� ������ ===" << endl;
	//concert concert3(move(concert1));
	//concert3.show();

	//cout << "=== ���� ������ ===" << endl;

	//concert** manager1 = new concert * [5]; //�� ��, new concert[5]�� ����Ʈ
	//manager1[0] = new concert("A�ܼ�Ʈ", 3);
	//manager1[0] = new concert("B�ܼ�Ʈ", 2);
	//manager1[0]->reservation();
	//manager1[0]->show();
	//delete manager1[0];
	//delete manager1[1];
	//delete[] manager1;
	//manager1 = nullptr;

	/*cout << "=== ����ũ ������ ===" << endl;

	unique_ptr<unique_ptr<concert>[]> manager1 = make_unique < unique_ptr<concert>[]>(5);

	manager1[0] = make_unique<concert>("A�ܼ�Ʈ", 3);
	manager1[0] = make_unique<concert>("B�ܼ�Ʈ", 2);
	manager1[0]->reservation();
	manager1[0]->show();*/

	cout << "=== shared ������ ===" << endl;

	shared_ptr<shared_ptr<concert>[]> manager1(new shared_ptr<concert>[5]);

	manager1[0] = make_shared<concert>("A�ܼ�Ʈ", 3);
	manager1[0] = make_shared<concert>("B�ܼ�Ʈ", 2);
	manager1[0]->reservation();
	manager1[0]->show();
}