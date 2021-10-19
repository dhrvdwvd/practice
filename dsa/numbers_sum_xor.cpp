#include<iostream>

using namespace std;

void compute(unsigned long int S, unsigned long int X)
{
    unsigned long int A = (S-X)/2;
    int a=0, b=0;

    for(int i=0; i<8*sizeof(S); i++)
    {
        unsigned long int Ai = (A & (1 << i));
        unsigned long int Xi = (X & (1 << i));

        if((Xi==0) && (Ai==0))
        {
            
        }
        else if((Xi==0) && (Ai>0))
        {
            a = (a | (1 << i));
            b = (b | (1 << i));
        }
        else if((Xi > 0) && (Ai == 0))
        {
            b = (b | (1 << i));
        }
        else
        {
            cout << "Not possible\n";
            return;
        }
    }
    cout << a << " " << b << "\n";
}
int main()
{
    unsigned long int S;
    unsigned long int X;

    cin >> S >> X;

    compute(S, X);
    return 0;
}