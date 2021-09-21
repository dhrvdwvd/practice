#include<iostream>
#include<fstream>
/**********************************************************
* The useful classes for working with files in C++ are:   *
*    1. fstreambase                                       *
*    2. ifstream --> derived from fstreambase             *
*    3. ofstream --> derived from fstreambase             *
*                                                         *
* To work with files in C++, you'll have to open it.  Th- *
* ere are primarily two ways to open it in C++:           *
*                                                         *
* 1. Using the constructor.                               *
* 2. Using the member function open() of the class.       *
*                                                         *
**********************************************************/
using namespace std;
int main(){
	// string s = "ROSHNI";
	string s1;
	// ofstream out("sample.txt");
	// out << s;
	// In the above out is an object of class ofstream, and 
	// "sample.txt" string is input to a constructor.
	// above is used to write to a file.
	
	ifstream in("sample.txt");
	//in >> s1;
	// in stops reading at newlines and spaces.  We can
	// use a getline() function to read an entire line and moveon.
	for(int i=0; i<6; i++){
		getline(in, s1);
		cout << s1;
	}
	return 0;
}