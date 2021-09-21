#include<iostream>
using namespace std;
int count = 0;
class num
{
	public:
		num(){
			count++;
			cout<< "Constructor called for object "<<count<< "!\n";
		}
		// The following is the destructor:
		~num(){  // Declaration of a destructor.
			cout<< "Destructor called for object "<<count<< "!\n";
			count--;
		}
};
int main(){
	cout<< "Main function called!\n";
	cout<< "Creating first object n1 in main block.\n";
	num n1;
	{
		cout<< "Declaring two more objects and entering a separate block.\n";
		num n2, n3;
		cout<< "Exiting the separate block\n";
	}
	cout<< "Exiting main block\n";
	return 0;
}
/**********************************************************
* Destructor neither takes an argument nor returns any v- *
* alue.  It is implicitly called by a compiler to clean   *
* the memory after exiting a block where it was defined.  *
**********************************************************/