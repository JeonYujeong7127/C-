#include <iostream>
#include "HTMLWriter.h"
#include "DocWriter.h"
using namespace std; 
void showFileContent(DocWriter& doc) {
	doc.readFile();
}

int main() {
	/*DocWriter doc1;
	doc1.setFileName("test1.txt");
	doc1.setContent("yujjoa");
	doc1.write();*/

	//HTMLWriter html1("index.html", "yujjoa");
	//html1.setFont("����ü", 20, "blue");
	//html1.write();

	/*HTMLWriter html1("test.html", "yujjoa");
	html1 << "��" << 2 << "Ŀ��" << 1;
	html1.write();*/

	DocWriter doc1("doctest.txt", "yujjoa");
	HTMLWriter html1("htmltest.html", "konkuk");
	
	// html1 = doc1; �Ұ���
	
	showFileContent(doc1);
	showFileContent(html1); // DocWriter& doc = html1; 
	// �θ�� �ڽ��� & ����
}