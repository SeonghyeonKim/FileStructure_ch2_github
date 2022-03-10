//extra Person class 읽고 출력하기
#include <fstream>
#include <string.h>
#include <iostream>
#include "person.h"
using namespace std;

const int MaxBufferSize = 200;

void ReadPerson()
{
	char ch;
	fstream file; 
	char filename[20];
	cout << "Enter the name of the file: "	<< flush; 
	cin >> filename;						
	file.open(filename, ios::in);			
	while (1)
	{
		file >> ch;							
		if (file.fail()) break;
		cout << ch;							
	}
	file.close();

	return ;
}

int main() {
	

	return 0;
}