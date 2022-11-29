#ifdef _DEBUG
#ifndef DBG_NEW
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define new DBG_NEW
#endif // !DBG_NEW
#endif
#include "JYJTV.h"
#include "JYJClothing.h"
#include "JYJManager.h"
#include <algorithm>
bool checkOnepiece(JYJProduct* p) {
	if (dynamic_cast<JYJClothing*>(p) != nullptr) {
		if (dynamic_cast<JYJClothing*>(p)->getClothname() == "���ǽ�") {
			return true;
		}
		else
			return false;
	}
	else
		return false;
}

bool checkElectronic(JYJProduct* p) {
	if (dynamic_cast<JYJProduct*>(p) != nullptr) {
		if (dynamic_cast<JYJProduct*>(p)->getCategory() == "������ǰ") {
			return true;
		}
		else
			return false;
	}
	else
		return false;
}

bool compare(JYJProduct* p1, JYJProduct* p2) {
	if (p2->getPrice() < p1->getPrice()) 
		return true;
	else
		return false;
}

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	cout << "1) �й� �̸� ����ϱ�" << endl;
	cout << "202014191 ������" << endl;

	cout << "2) JYJProduct �߻� Ŭ���� �����" << endl;
	//JYJProduct p("A0001", "������ǰ", 3, 1000);

	cout << "3) JYJTV ��ü ����" << endl;
	JYJProduct* tv = new JYJTV("A0001", "������ǰ", 3, 1000, "�Ǳ�����", "COM001", 62);

	cout << "4) JYJClothing ��ü ����" << endl;
	JYJProduct* pants = new JYJClothing("A0001", "�Ƿ�", 5, 120, "��������", "�Ǳ�û����", "XL");

	cout << "5) ���� �����ϱ�" << endl;
	tv->join("ȫ�浿");
	pants->join("��浿");
	pants->join("�̱浿");

	cout << "6) ��ü ���� ����ϱ�" << endl;
	cout << *tv << endl;
	cout << *pants << endl;

	cout << "7) JYJManager ��ü �����ϱ�" << endl;
	JYJManager manager("�Ǳ�����");

	cout << "8) JYJManager�� �Ǹ� ��ǰ �߰��ϱ�" << endl;
	manager.additem(new JYJTV("E0001", "������ǰ", 3, 2000, "�Ǳ�����", "COM001", 62));
	manager.additem(new JYJClothing("A0001", "�Ƿ�", 5, 1200, "�������", "�Ǳ�û����", "XL"));
	manager.additem(new JYJTV("E0001", "������ǰ", 2, 100, "��������", "SW001", 48));
	manager.additem(new JYJClothing("A0001", "�Ƿ�", 2, 200, "������", "���ǽ�", "XXL"));
	manager.additem(new JYJClothing("A0001", "�Ƿ�", 3, 100, "������", "Ƽ����", "L"));

	cout << "9) �ǸŵǴ� ��ǰ ��ü ���� ���� ��������" << endl;
	auto items = manager.getItems();

	cout << "10) ���ǽ� ��ǰ ã��" << endl;
	auto pos = find_if(items.begin(), items.end(), checkOnepiece);
	cout << **pos << endl;

	cout << "11) �Ǹ���ǰ �� ������ǰ�� ��� ����ϱ�" << endl;
	for (auto it = items.begin(); it != items.end(); it++) {
		pos = find_if(it, items.end(), checkElectronic);
		
		if (pos == items.end()) {
			break;
		}

		cout << **pos << endl;
	}


	cout << "12) ���� ���ݼ����� �����ؼ� ����ϱ�" << endl;
	sort(items.begin(), items.end(), compare);

	for (auto it = items.begin(); it != items.end(); it++)
		cout << **it << endl;

	delete pants;
	delete tv;
}