#include <iostream>

using namespace std;

void merge(int a[], int p, int q, int r)
{
    int i,j,k=p;
    int L[q-p+1];
    int R[r-q];

    for(int in=0; in<q-p+1; in++)
    {
        L[in] = a[p+in];
    }
    for(int in=0; in<r-q; in++)
    {
        R[in] = a[q+1+in];
    }
    i=0; j=0;
    while(i<=q-p && j<=r-q-1)
    {
        if(L[i]<R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    if(i>q-p)
    {
        for(j; j<=r-q-1; j++)
        {
            a[k] = R[j];
            k++;
        }
    }
    else if(j>r-q-1)
    {
        for(i; i<=q-p; i++)
        {
            a[k] = L[i];
            k++;
        }
    }
}

void merge_sort(int a[], int p, int r)
{
    if(p<r)
    {
        int q = (p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
        return;
    }
    else
    {
        return;
    }
}
int main()
{
    int a[] = {3,41,52,26,38,57,9,49};
    merge_sort(a, 0, 7);
    for(int i=0; i<=7; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}