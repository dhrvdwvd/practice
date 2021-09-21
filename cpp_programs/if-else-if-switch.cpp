#include<iostream>
using namespace std;
int main(){
  int number;
  int age;
  cout<< "Enter a number: ";
  cin>>number;
  cout<< "Enter your age: ";
  cin>>age;
  if(number<100){
	  cout<< "Number is less than 100."<<endl;
  }
  else if(number==100){
      cout<< "Number is 100."<<endl;
  }
  else {
	  cout<< "Number is greater than 100."<<endl;
  }
  switch (age)
  {
  case 0:
    cout<< "Not born yet."<<endl;
	break;
  case 18:
    cout<< "You are 18 years old."<<endl;
	break;
  case 24:
    cout<< "You are 24 years old."<<endl;
	break;
  default:
    cout<< "You have some age."<<endl;
	break;
  }
  return 0;
}