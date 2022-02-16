#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    
    ofstream fout;
    string line;
    
    fout.open("E:/Sample112.txt" , ios::out|ios::trunc);
    cout <<"Enter Text "<<endl;
   
    while (fout)
    {
        getline(cin, line);
        if (line == "-1")
            break;
        fout << line << endl;
    }
    fout.close();
    
    return 0;
}