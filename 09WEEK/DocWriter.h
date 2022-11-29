#pragma once
#include <string>
using std::string;

class DocWriter
{
protected:
	string fileName;
	string content;
public:
	DocWriter();
	~DocWriter();
	DocWriter(const string& fileName, const string& content);
	void setFileName(const string& fileName);
	void setContent(const string& content);
	void write();
	DocWriter& operator<<(const string& str);
	DocWriter& operator<<(const int& num);
	void readFile();
};

