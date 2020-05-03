#pragma once
#include <iostream>
#include <fstream>
#include <string>


class FileIO
{
public:
	int WriteInFile(std::string fileName, std::string text);
	~FileIO();

private:

};

int FileIO::WriteInFile(std::string fileName, std::string text)
{
	std::fstream s;
	std::fstream s(fileName, s.binary | s.out);
	if (!s) {

	}
	return 0;
}

FileIO::~FileIO()
{
}

