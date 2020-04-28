#pragma once
#include <iostream>
#include <string>
#include <fstream>

class FileIO
{
public:
	int WriteInFile(string fileName, string text);
	~FileIO();

private:

};

int FileIO::WriteInFile(string fileName, string text)
{
	ofstream out(fileName, ios::out | ios::binary);
	if (!out) {
		cout << "File open error";
		return 1;
	}
	out.write(text.c_str(), text.size());
	out.close();
	return 0;
}

FileIO::~FileIO()
{
}
