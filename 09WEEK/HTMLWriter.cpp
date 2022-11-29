#include "HTMLWriter.h"
#include <iostream>
#include <fstream>
using namespace std;

HTMLWriter::HTMLWriter()
	:DocWriter("noFileName.html", "noContent")
{
}

HTMLWriter::~HTMLWriter()
{
	cout << "HTMLWriter 소멸자" << endl;
}

//HTMLWriter::HTMLWriter(const string& fileName, const string& content)
//	:DocWriter(fileName, content)  // 부모 생성자 호출
//{
//	cout << "HTMLWriter 생성자" << endl;
//}

void HTMLWriter::setFont(const string& fontName, const int& fontSize, const string& fontColor)
{
	this->fontName = fontName;
	this->fontColor = fontColor;
	this->fontSize = fontSize;
}

void HTMLWriter::write()
{
	ofstream fout(fileName);
	fout << "<html><head><title>Yujjoa's Homepage</title></head>" << endl;
	fout << "<body>" << endl;
	fout << "<H1>####### 202014191 전유정#######</H1>" << endl;
	fout << "<font face='" << fontName << "' size='" << fontSize;
	fout << "' color='" << fontColor << "'>" << content << "</font>" << endl;
	fout << "</body></html>" << endl;
}

HTMLWriter& HTMLWriter::operator<<(const string& str)
{
	content += "<br>" + str + "<br>";
	return *this;
}

HTMLWriter& HTMLWriter::operator<<(const int& num)
{
	content += "<br>" + to_string(num) + "<br>";
	return *this;
}
