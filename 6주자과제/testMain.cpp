#include <iostream>
#include "ArrayDataSmart.h"
#include "ArrayData.h"
#include <list>
#include <vector>
using namespace std;

int main() {
	cout << "202014191 전유정" << endl;

	ArrayData<int> arr1;
	arr1.addElement(10);
	arr1.addElement(20);
	arr1.addElement(30);
	cout << arr1 << endl;

	ArrayData<int> arr2 = arr1;
	cout << arr2 << endl;

	ArrayData<int> arr3 = move(arr2);
	cout << arr3 << endl;

	/*ArrayDataSmart arr1(5);
	arr1.addElement(10.1);
	arr1.addElement(10.2);
	arr1.addElement(10.3);
	arr1.addElement(10.4);
	arr1.backup();
	arr1.addElement(10.5);
	arr1.addElement(10.6);

	cout << "arr1 : " << arr1 << endl;
	cout << "------ restore ------" << endl;
	arr1.restore();
	cout << "arr1 : " << arr1 << endl;

	cout << "------ 대입 ------" << endl;
	ArrayDataSmart arr2(20);
	arr2 = arr1;
	cout << "arr2 : " << arr2 << endl;
	
	cout << "------ 이동대입 ------" << endl;
	ArrayDataSmart arr3(3);
	arr3 = move(arr1);
	cout << "arr3 : " << arr3 << endl;*/




	/*ArrayData arr1(5);
	arr1.addElement(5.5);
	arr1.addElement(10.5);

	cout << "===============" << endl;
	ArrayData arr2;
	arr2 = arr1;
	for (int i = 0; i < arr2.getUsed(); i++) {
		cout << arr2[i] << endl;
	}

	cout << "==================" << endl;

	ArrayData arr3;
	arr3 = move(arr2);
	for (int i = arr3.getUsed(); i < arr3.getCapacity(); i++) {
		arr3[i] = 10.0;
		arr3.setUsed();
	}

	cout << arr3 << endl;*/

	/*vector<ArrayData> vec;
	for (size_t i = 0; i < 4; i++) {
		cout << "iteration " << i << endl;
		vec.push_back(ArrayData(5));
		cout << endl;
	} */

	//showArr(getArr(10));
	

	/*
	ArrayData data1;
	
	data1.addElement(5.5);
	data1.addElement(5.5);
	data1.addElement(5.5);
	data1.addElement(5.5);
	data1.addElement(5.5);
	data1.showData();

	ArrayData copy1 (data1);
	copy1.showData(); //런타임 오류는 깊은 복사로 해결
	cout << "===================" << endl;
	showArr(copy1);
	cout << "===================" << endl;
	ArrayData copy2 = getArr(10);

	/*ArrayData* parr = new ArrayData(10);
	parr->addElement(10.5);
	parr->addElement(10.5);
	parr->addElement(10.5);
	parr->addElement(10.5);
	parr->showData();
	delete parr;*/
}