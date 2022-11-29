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
	//Concert concert1("������ �ܼ�Ʈ", 5);
	//concert1.reservation();
	//concert1.reservation();


	//cout << "=== ���� ������ ===" << endl;
	//Concert concert2(concert1);
	//concert2.show();

	//cout << "=== �̵� ������ ===" << endl;
	//Concert concert3(move(concert1)); //lvalue ��ü�� rvalue ��ü��
	//concert3.show();


	//Concert** manager1 = new Concert * [5]; //��� new Concert[5]�� �ٸ�
	//unique_ptr<unique_ptr<Concert>[]> manager1 = make_unique < unique_ptr<Concert>[]>(5);
	shared_ptr<shared_ptr<Concert>[]> manager1(new shared_ptr<Concert>[5]);

	manager1[0] = make_shared<Concert>("A�ܼ�Ʈ", 3);
	manager1[1] = make_shared<Concert>("B�ܼ�Ʈ", 3);
	manager1[0]->reservation();
	manager1[0]->show();
	manager1 = nullptr;

}