#include <iostream>
#include "ArrayData.h"
#include "CMyPoint.h"
#include "Student.h"
#include <list>
using namespace std;

template <typename T, typename P>
int search(T(arr) [], int b, P c) {
	for (int i = 0; i < b; i++) {
		//auto x = arr[i];
		//auto y = c;
		if (arr[i] == c) {
			return i;
		}
	}
	return -1;
}

template <typename T>
void printArr(list<T>& v) {
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
}
int main() {
	cout << "202014191 전유정" << endl;
	
	list<CMyPoint> list2;
	list2.push_back(CMyPoint(10, 10));
	list2.emplace_back(20, 20);
	list2.emplace_back(20, 20);
	list2.emplace_back(20, 20);
	list2.push_front(CMyPoint(30, 30));
	printArr(list2);

	
	//list<int> list1({ 1, 2, 3, 3, 3, 4, 5 });

	//int arr[5] = { 5, 4, 3, 2, 1 };
	//int idx1 = search(arr, 5, 3); //배열, 배열 크기 정보, 찾을 값
	//if (idx1 != -1) {
	//	cout << arr[idx1] << endl; 
	//}

	//string id[3] = { "greenjoa1", "greenjoa2", "greenjoa3" };
	//int idx2 = search(id, 3, string("greenjoa2"));
	//if (idx2 != -1) {
	//	cout << id[idx2] << endl;
	//}

	/*Student std[3] = { Student("greenjoa1", 70), 
						Student("greenjoa2", 50), 
						Student("greenjoa3", 80) };

	int idx3 = search(std, 3, "greenjoa2");
	if (idx3 != -1) {
		cout << std[idx3] << endl;
	}

	int idx4 = search(std, 3, Student("greenjoa3", 80));
	if (idx4 != -1) {
		cout << std[idx4] << endl;
	}*/

}