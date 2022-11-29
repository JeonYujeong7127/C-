#include <iostream>
#include "JYJClient.h"
#include "JYJItem.h"
using namespace std;

int main(void) {
	cout << "학번 이름" << endl;

	JYJClient client1();
	JYJClient client2("홍길동", 1000);
	JYJItem item("TV", 3);

	client2.showClient();
	item.showItem();
	
	JYJItem copy(item);
	copy.showItem();
} 