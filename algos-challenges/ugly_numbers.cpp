#include<iostream>
#include<math.h>

using namespace std;

int lowest(int a, int b, int c)
{
    b = (a<b)?a:b;
    return (b<c)?b:c;
}
int nthUglyNumber(int n)
{
    int m1[n / 2], m2[n / 2], m3[n / 2];
    int mf[3*n / 2] = {0};
    for (int i = 0; i < n / 2; i++)
    {
        m1[i] = pow(2, i);
        m2[i] = pow(3, i);
        m3[i] = pow(5, i);
    }
    int i=0;
    int i1 = 0, i2 = 0, i3 = 0;
    while(i<n)
    {
        
    }
    return mf[n - 1];
}

int main()
{
    printf("%d ", nthUglyNumber(2));
    return 0;
}