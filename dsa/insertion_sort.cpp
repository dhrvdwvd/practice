#include <iostream>

using namespace std;

int BinarySearch(int arr[], int start, int end, int key)
{
    // assumes the array is sorted
    int mid = (start+end)/2;
    if(key==arr[mid]) return mid; 
    else if(key>arr[mid])
    {
        if(mid+1>end) return end+1;
        return BinarySearch(arr, mid+1, end, key);
    }
    else
    {
        if(mid-1<start) return start-1;
        return BinarySearch(arr, start, mid-1, key);
    }
}
void Insertion_sort(int arr[], int n)
{
    int key;
    for(int i=1; i<n; i++)
    {
        key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            arr[j] = key;
            j--;
        }
        
    }
}

void Insertion_sort_dec(int arr[], int n)
{
    int key;
    for(int i=1; i<n; i++)
    {
        key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]<key)
        {
            arr[j+1] = arr[j];
            arr[j] = key;
            j--;
        }
        
    }
}

void Insertion_sort_rec(int arr[], int n)
{
    if(n==1)
    {
        return;
    }
    else
    {
        int* newarr= arr;
        for(int i=0; i<n-1; i++)
        {
            newarr[i] = arr[i];
        }
        Insertion_sort_rec(newarr, n-1);
        int j=n-2;
        int key = arr[n-1];
        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            arr[j] = key;
            j--;
        }
    }
}

int main()
{
    int arr[6] = {31,41,59,26,41,58};
    Insertion_sort_rec(arr, 6);
    for(int i=0; i<6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}