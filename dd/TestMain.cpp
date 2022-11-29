#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

void saveOrder(vector<int> ex)
{
	ofstream fout("ex.txt");
	if (!fout.is_open()) {
		cerr << "fail" << endl;
		return;
	}
	for (vector<int>::iterator it = ex.begin(); it != ex.end(); it++) {
		fout << *it << " ";
	}
}

vector<int> loadOrder()
{
	vector<int> ex2;

	ifstream fin("ex.txt");

	if (!fin.is_open()) {
		cerr << "fail";
		return ex2;
	}

	int x;

	while (!fin.eof()) {
		fin >> x;
		ex2.push_back(x);
	}

	return ex2;
}

int main() {
	vector<int> ex;

	ex.push_back(1);
	ex.push_back(2);
	ex.push_back(3);
	ex.push_back(4);
	saveOrder(ex);

	vector<int> ex3;
	ex3 = loadOrder();

	for (vector<int>::iterator it = ex3.begin(); it != ex3.end() - 1; it++) {
		cout << *it << endl;
	}
}