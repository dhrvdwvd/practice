#include<iostream>
#include<fstream>
using namespace std;
int main(){
	// Creating an output file stream object:
	ofstream fout("sample.txt");
	
	// Prompting user for a string input:
	string name;
	cout << "Enter your name: ";
	//cin >> name;
	getline(cin,name);
	
	// Writing the string to the file:
	fout << "Name entered by the user: " << name;
}
/**********************************************************
* cin stops input at space/newline.  So use getline() as  *
* above                                                   *
**********************************************************/