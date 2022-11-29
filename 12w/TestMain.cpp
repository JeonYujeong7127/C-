#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	vector<int> intarr1;
	for (int i = 0; i < 10; i++) {
		intarr1.push_back(i);
		cout << intarr1.size() << endl;
		cout << intarr1.capacity() << endl;
		cout << intarr1.data() << endl;
		cout << endl;
	}
	
}