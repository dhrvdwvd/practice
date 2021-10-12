#include <iostream>
using namespace std;

int main()
{
    int a=100;
    int b=200;
    int c=300;
    cout << "Address " << &a << " contains value: " << a << "\n";
    cout << "Address " << &b << " contains value: " << b << "\n";
    cout << "Address " << &c << " contains value: " << c << "\n";
    return 0;
}