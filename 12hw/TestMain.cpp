#include <iostream>
#include <list>
using namespace std;

void printArr(list<string>& v) {
	for (auto i : v) {
		cout << i << " ";
	}

	cout << endl;
}

list<string> getStudent(list<list<string>>& l, list<string>& d) {
	list<string> list;

	for (auto& i : l) {
		i.sort();
		list.merge(i);
	}
	
	for (auto& j : d) {
		list.remove(j);
	}

	list.sort();
	list.unique();

	return list;
}

int main() {
	cout << "202014191 ÀüÀ¯Á¤" << endl;
	
	list<list<string>> std;
	std.push_back({ "greenjoa1", "bluejoa1","greenjoa3" });
	std.push_back({ "greenjoa1" ,"greenjoa3" });
	std.push_back({ "redjoa1" ,"greenjoa2" ,"bluejoa2" });
	list<string> droplist({ "greenjoa2", "bluejoa1" });

	list<string> student = getStudent(std, droplist);
	printArr(student);
}