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
	//html1.setFont("돋움체", 20, "blue");
	//html1.write();

	/*HTMLWriter html1("test.html", "yujjoa");
	html1 << "빵" << 2 << "커피" << 1;
	html1.write();*/

	DocWriter doc1("doctest.txt", "yujjoa");
	HTMLWriter html1("htmltest.html", "konkuk");
	
	// html1 = doc1; 불가능
	
	showFileContent(doc1);
	showFileContent(html1); // DocWriter& doc = html1; 
	// 부모는 자식을 & 가능
}