#include <iostream>
#include <fstream>
#include <exception>
#include <string>
#include <map>
using namespace std;

int main() {
	ifstream dicfile("wor2ds.txt");
	map<string, string> dic;

	try {
		//if (!dicfile.fail()) {
		dicfile.exceptions(ifstream::failbit);
			while (!dicfile.eof()) {
				string eng, kor;
				getline(dicfile, eng);
				getline(dicfile, kor);
				dic.insert({ eng, kor });
			}

			auto it = dic.find("consider");
			if (it != dic.end()) {
				cout << it->first << ": " << it->second << endl;
			}
			else {
				cout << "�ܾ� ����" << endl;
			}
		//}
		//else {
		//	// cerr << "������ �������� ����" << endl;
		//	throw exception("������ �������� ����");
		//}
	}
	catch (exception e) {
		cerr << e.what() << endl;
		cerr << dicfile.fail() << endl;
		cerr << dicfile.good() << endl;
		cerr << dicfile.bad() << endl;
		cerr << dicfile.eof() << endl;
	}
}