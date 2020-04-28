#pragma once
#include <iostream>
#include <string>
#include <fstream>

class FileIO
{
public:
	FileIO();
	~FileIO();
	int WriteInFile(string fileName, string text);
	string ReadFromFile(string fileName);

private:

};
FileIO::FileIO()
{
}


FileIO::~FileIO()
{
}

int FileIO::WriteInFile(string fileName, string text)
{
	ofstream out(fileName, ios::out | ios::binary);
	if (!out) {
		cout << "File open error";
		return -1;
	}
	out.write(text.c_str(), text.size());
	out.close();
	return 1;
}
string FileIO::ReadFromFile(string fileName)
{
	string outStr = "";
	ifstream in(fileName);
	in >> outStr;
	return outStr;
}