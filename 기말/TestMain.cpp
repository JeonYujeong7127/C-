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
		if (dynamic_cast<JYJClothing*>(p)->getClothname() == "원피스") {
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
		if (dynamic_cast<JYJProduct*>(p)->getCategory() == "가전제품") {
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

	cout << "1) 학번 이름 출력하기" << endl;
	cout << "202014191 전유정" << endl;

	cout << "2) JYJProduct 추상 클래스 만들기" << endl;
	//JYJProduct p("A0001", "가전제품", 3, 1000);

	cout << "3) JYJTV 객체 생성" << endl;
	JYJProduct* tv = new JYJTV("A0001", "가전제품", 3, 1000, "건국전자", "COM001", 62);

	cout << "4) JYJClothing 객체 생성" << endl;
	JYJProduct* pants = new JYJClothing("A0001", "의류", 5, 120, "남여공용", "건국청바지", "XL");

	cout << "5) 구매 참여하기" << endl;
	tv->join("홍길동");
	pants->join("김길동");
	pants->join("이길동");

	cout << "6) 객체 정보 출력하기" << endl;
	cout << *tv << endl;
	cout << *pants << endl;

	cout << "7) JYJManager 객체 생성하기" << endl;
	JYJManager manager("건국나라");

	cout << "8) JYJManager에 판매 물품 추가하기" << endl;
	manager.additem(new JYJTV("E0001", "가전제품", 3, 2000, "건국전자", "COM001", 62));
	manager.additem(new JYJClothing("A0001", "의류", 5, 1200, "남녀공용", "건국청바지", "XL"));
	manager.additem(new JYJTV("E0001", "가전제품", 2, 100, "대학전자", "SW001", 48));
	manager.additem(new JYJClothing("A0001", "의류", 2, 200, "여성용", "원피스", "XXL"));
	manager.additem(new JYJClothing("A0001", "의류", 3, 100, "남성용", "티셔츠", "L"));

	cout << "9) 판매되는 제품 전체 저장 정보 가져오기" << endl;
	auto items = manager.getItems();

	cout << "10) 원피스 제품 찾기" << endl;
	auto pos = find_if(items.begin(), items.end(), checkOnepiece);
	cout << **pos << endl;

	cout << "11) 판매제품 중 가전제품만 모두 출력하기" << endl;
	for (auto it = items.begin(); it != items.end(); it++) {
		pos = find_if(it, items.end(), checkElectronic);
		
		if (pos == items.end()) {
			break;
		}

		cout << **pos << endl;
	}


	cout << "12) 높은 가격순으로 정렬해서 출력하기" << endl;
	sort(items.begin(), items.end(), compare);

	for (auto it = items.begin(); it != items.end(); it++)
		cout << **it << endl;

	delete pants;
	delete tv;
}