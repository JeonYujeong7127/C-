#include <iostream>

using namespace std;


int main_smartPointer() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// shared_ptr example
	// int * pnum1 = new int;
	auto pnum1 = make_shared<int>();
	*pnum1 = 100;
	cout << *pnum1 << endl;

	auto pnum1_copy = pnum1;
	*pnum1_copy = 200;
	cout << *pnum1_copy << endl;
	cout << pnum1.use_count() << endl;
	cout << *pnum1 << endl;


	return 0;
}