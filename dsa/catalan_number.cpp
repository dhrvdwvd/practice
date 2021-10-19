#include<bits/stdc++.h>

using namespace std;

int CatalanNumber(int n)
{
    if((n==0) || (n==1)) return 1;
    else
    {
        int i=n-1;
        int sum = 0;
        while(i>=0)
        {
            sum = sum + CatalanNumber(i)*CatalanNumber(n-1-i);
            i--;
        }
        return sum;
    }
}

int CatalanNumber1(int n)
{
    int C[n+1]={0};
    C[0] = 1;
    C[1] = 1;
    if(n==0) return C[0];
    else if(n==1) return C[1];
    else
    {
        for(int i=2; i<n+1; i++)
        {
            for(int j=0; j<i; j++)
            {
                C[i] +=C[j]*C[i-1-j];
            }
        }
        return C[n];
    }
}

int CatalanNumber2(int n)
{
    unsigned long long int factorial1=1;
    unsigned long long int factorial2=1;
    for(int i=0; i<2*n; i++)
    {
        factorial1 *= (i+1);
        if(i<n)
        {
            factorial2 *= (i+1);
        }
    }
    printf("%ld %ld\n", factorial1, factorial2);
    return (factorial1/(factorial2*factorial2*(n+1)));
}
int main()
{
    int n;
    cin >> n;
    cout << CatalanNumber2(n);
    return 0;
}