#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIdx = i;
        for(int j = i+1; j<n; j++)
        {
            if(a[j]<a[minIdx]) minIdx = j;
        }
        swap(a+i, a+minIdx);
    }
}
int main()
{
    int n = 6;
    int a[] = {6,5,4,3,2,1};
    selection_sort(a, n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}