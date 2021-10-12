#include <iostream>

using namespace std;

void binary_add(int x[], int y[], int sum[], int n)
{
    int i = n-1;
    int carry = 0;
    while(i>=0)
    {
        if(x[i]!=y[i])
        {
            sum[i+1] = (carry)?0:1;
            carry = (carry)?1:0;
        }
        else
        {
            sum[i+1] = (carry)?1:0;
            if(x[i])
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
        }
        i--;
    }
    sum[0] = carry;
}
int main()
{
    int n = 2;
    int a[n], b[n];
    int sum[n+1];
    printf("You must enter %d-bit binary numbers (space separated)\n", n);
    printf("Enter the first binary number: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",a+i);
    }
    printf("Now the second binary number: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",b+i);
    }
    printf("You entered first: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nand then yu entered: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", b[i]);
    }
    binary_add(a, b, sum, n);
    printf("\nThe sum of the above numbers: ");
    for(int i=0; i<=n; i++)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}