#include<iostream>
#include<string>
#include<stdlib.h>  // for exit function
using namespace std;
/**********************************************************
* OOPS - Classes and Objects.                             *
* C++ was initially called C with classes by Stroustroup  *
* class -> extension of structures (in C)                 *
* structures have limitations:                            *
*  -> members are public,                                 *
*  -> and no methods.                                     *
* classes -> structures + more                            *
* classes -> have both methods and properties             *
* classes -> can make few members private, and few memb-  *
* ers public.                                             *
* structures and classes in C++ are typedefed.            *
* To declare objects along with class declaration:        *
*  class employee{                                        *
*	//Class definition.                                   *
*   } employee1, employee2, etc.                          *
* employee1.salary = 7; makes no sense if salary is a p-  *
* rivate property.                                        *
**********************************************************/
class binary{
	// by default string s is private.
	string s;
	public:
	  void bin_read();
	  void check_bin();
	  void ones_complement();
};
void binary :: bin_read(){
	cout<< "Enter a binary number: "<<endl;
	cin>>s;
}
void binary :: check_bin(){
	for(int i=0;i<s.length();i++)
	{
		if( (s.at(i) != '0') && (s.at(i) != '1') )
		{
			cout<< "Non-binary string.\n";
			exit(0);
		}
	}
}
void binary :: ones_complement(){
	check_bin();
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i) == '1')
		{
			s.at(i) = '0';
		}
		else
		{
			s.at(i) = '1';
		}
	}
	cout<< "Ones complement of binary number: "<<s<<endl;
}
int main(){
  binary a;
  a.bin_read();
  //a.check_bin();  //Nested inside ones_complement method.
  a.ones_complement();
  return 0;
}