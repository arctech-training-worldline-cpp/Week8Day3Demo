#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fio;
	string line;

	fio.open("sample3.txt", ios::out | ios::in | ios::trunc);
	
	while(fio)
	{
		//get a linr from user 
		getline(cin, line);

		if(line == "-1")
			break;
		fio << line << endl;
	}
	
	fio.seekg(0, ios::beg);

	while(fio)
	{
		getline(fio, line);
		cout << line << endl;
	}

	fio.close();

	return 0;
}

