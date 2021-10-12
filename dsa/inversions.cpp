#include <iostream>

using namespace std;
int count1 = 0;
void Merge(int a[], int p, int q, int r)
{
    int L[q - p + 1], R[r - q];
    for (int i = 0; i < q - p + 1; i++)
    {
        L[i] = a[p + i];
    }
    for (int i = 0; i < r + 1; i++)
    {
        R[i] = a[q + 1 + i];
    }
    int i = 0, j = 0;
    while ((i < q-p+1) && (j < r-q))
    {
        if (L[i]>R[j])
        {
            count1++;
            i++;
        }
        else
        {
            j++;
        }
    }
}

void Inversions(int a[], int p, int r)
{
    if(p<r)
    {
        int q = (p+r)/2;
        Inversions(a, q+1, r);
        Inversions(a, p, q);
        Merge(a,p,q,r);
    }
}

int Inversions_naive(int a[], int n)
{
    int count=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int a[] = {2, 3, 8, 6, 1};
    printf("Inversions(naive) in a: %d\n", Inversions_naive(a,5));
    Inversions(a, 0, 4);
    printf("Inversions in a: %d\n", count1);
    return 0;
}