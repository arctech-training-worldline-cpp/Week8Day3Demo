#include <iostream>
#include<fstream>

using namespace std;

int main()
{
	//write data to the file
	//create ofstream class object
	ofstream fout;
	string line;

	//open the file using fout (output stream)
	//if file does not exist it will create the file and open it
	//if file exist it will open the file, truncate the data and then write to it.
	//in case you want to append data, use ios::app
	fout.open("sample.txt");

	//using constructor to open the file
	//ofstream fout1("sample.txt");

	while(fout)
	{		
		getline(cin, line);
		if(line == "-1")
			break;

		fout << line << endl;		
	}
	//cose the file
	fout.close();

	//read the data from the file
	ifstream fin;
	fin.open("sample.txt");
	while(fin)
	{
		getline(fin, line);
		cout << line << endl;
	}

	fin.close();
	return 0;
}