#include <iostream>
int search(int* arr, int key);
using namespace std;

int main()
{
    int key;
    int arr[] = {1,2,3,4,5,6,7,8};
    cout << "Element to search for: ";
    cin >> key;
    cout << "Element is at " << search(arr, key);
    return 0;
}

int search(int* arr, int key)
{
    int lo=0;
    int hi = 7;
    int mid = (lo+hi)/2;
    int diff;
    while (lo<=hi)
    {
        diff = key - *(arr+mid);
        if(diff>0)
        {
            lo = mid+1;
        }
        else if(diff<0)
        {
            hi=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -(mid);
}