#include<iostream>
#include<fstream>
using namespace std;
// In this program we will use the 2nd method to access and write files.
int main(){
	// ofstream fout;  // fout is an object of class ofstream.
	// fout.open("sample.txt");
	// fout<< "This is me.";
	// fout.close();
	
	ifstream fin;
	string st;
	fin.open("sample.txt");
	while(fin.eof()==0){  // eof() is end of file function.
		getline(fin,st);
		cout << st << "\n";
	}
	return 0;
}