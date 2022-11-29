#include <iostream>
#include <vector>
#include "CMyPoint.h"
#include "Stack.h"
#include <list>
using namespace std;

//template<typename T>
//void printArr(T* arr, size_t N) {
//	for (int i = 0; i < N; i++) {
//		cout << arr[i] << endl;
//	}
//	cout << endl;
//}
//
//void printArr(char* arr, size_t N) {
//	cout << arr << endl;
//}
//
//template<typename T, size_t N>
//void showArr(T(&arr)[N]) {
//	for (auto i : arr) {
//		cout << i << endl;
//	}
//	cout << endl;
//}
//
//template<typename T, size_t N>
//void sortDesc(T(&arr)[N]) {
//	for (size_t i = 0; i < N - 1; i++) {
//		for (size_t j = i + 1; j < N; j++) {
//			if (arr[i] < arr[j]) {
//				T temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//template<typename T, size_t N>
//void sortAsc(T(&arr)[N]) {
//	for (size_t i = 0; i < N - 1; i++) {
//		for (size_t j = i + 1; j < N; j++) {
//			if (arr[j] < arr[i]) {
//				T temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//}

template <typename T>
void printArr(list<T>& v) {
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	cout << "202014191 ÀüÀ¯Á¤" << endl;


	/*list<CMyPoint> list2;
	list2.push_back(CMyPoint(10, 10));
	list2.emplace_back(20, 20);
	list2.emplace_back(20, 20);
	list2.emplace_back(20, 20);
	list2.push_front(CMyPoint(30, 30));
	list2.unique();
	printArr(list2);*/

	/*vector<unique_ptr<CMyPoint>> arr;
	arr.push_back(make_unique<CMyPoint>(10, 10));
	arr.push_back(make_unique<CMyPoint>(10, 10));
	arr.push_back(make_unique<CMyPoint>(10, 10));
	arr.push_back(make_unique<CMyPoint>(10, 10));

	for (auto it = arr.begin(); it != arr.end(); it++) {
		cout << **it << " ";
	}*/

	/*vector<CMyPoint*> arr;
	arr.push_back(new CMyPoint(10, 10));
	arr.push_back(new CMyPoint(10, 10));
	arr.push_back(new CMyPoint(10, 10));
	
	for (auto it = arr.begin(); it != arr.end(); it++) {
		cout << **it << " ";
		delete* it;
	}*/

	/*vector<CMyPoint> arr;
	for (int i = 0; i < 5; i++) {
		//arr.push_back(CMyPoint(i * 10, i * 10));
		arr.emplace_back(i * 10, i * 10);
		cout << endl << endl;
	}*/
	/*Stack<> stack;
	stack.push(10);

	Stack<int> istack;
	istack.push(10);
	istack.push(20);
	istack.push(30);
	istack.push(40);
	istack.push(50);
	 
	Stack<CMyPoint> ptstack;
	ptstack.push(CMyPoint(10, 20));
	ptstack.push(CMyPoint(10, 20));
	ptstack.push(CMyPoint(10, 20));
	CMyPoint ptitem;
	while (ptstack.pop(ptitem)) {
		cout << ptitem << endl;
	}*/

	/*int item;
	while (istack.pop(item)) {
		cout << item << endl;
	}*/



	//CMyPoint arr[]{ CMyPoint(20, 30), CMyPoint(10, 20), CMyPoint(40, 50) };
 //	sortAsc(arr);
	//showArr(arr);

	/*int arr1[]{ 1,2,3,4,5 };
	double arr2[]{ 1.1,2.2, 3.3, 4.4, 5.5, 6.6 };
	string arr3[]{ "¤¡", "¤¤", "¤§" };
	char arr4[]{ 'a','b',0 };
	
	sortDesc(arr1);
	showArr(arr1);
	sortDesc(arr2);
	showArr(arr2);
	sortDesc(arr3);
	showArr(arr3);*/
	
	//printArr(arr1, size(arr1)); 
	//printArr(arr2, size(arr2));
	//printArr(arr3, size(arr3));
	//printArr(arr4, size(arr4));

}