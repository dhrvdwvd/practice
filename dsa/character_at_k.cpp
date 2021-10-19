#include<iostream>

using namespace std;
void merge(char* str1, int p, int q, int r)
{
    int i, j, k=p;
    char L[q-p+1];   
    char R[r-q];
    for(int in=0; in<q-p+1; in++)
    {
        L[in] = str1[p+in];
    }
    for(int in=0; in<r-q; in++)
    {
        R[in] = str1[q+1+in];
    }
    i=0, j=0;
    while((i<=q-p) && (j<=r-q-1))
    {
        if(int(L[i])<int(R[j]))
        {
            str1[k++] = L[i++];
        }
        else
        {
            str1[k++] = R[j++];
        }
    }
    if(i>q-p)
    {
        while(j<=r-q-1)
        {
            str1[k++] = R[j++];
        }
    }
    else if(j>r-q-1)
    {
        while(i<=q-p)
        {
            str1[k++] = L[i++];
        }
    }
    return;
}
void mergeSort(char* str1, int p, int r)
{
    if(p<r)
    {
        int q = (p+r)/2;
        mergeSort(str1, p, q);
        mergeSort(str1, q+1, r);
        merge(str1, p, q, r);
        return;
    }
    else
    {
        return;
    }
}
int main()
{
    char a[] = "ddddccccbbbbaaaa";
    int n = sizeof(a)/sizeof(a[0]);
    mergeSort(a, 0, n-2);
    cout << a;
    return 0;
}