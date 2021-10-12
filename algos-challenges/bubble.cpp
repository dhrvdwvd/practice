#include <iostream>
using namespace std;

void swap(int* a, int* b);

int main()
{
    int n;
    cout << "How many elements to sort <max-25>? ";
    cin >> n;

    // Reading elements from the user:
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        cout << "Enter element[" << i << "]: ";
        cin >> arr1[i];

    }
    cout << "The following elements were entered: ";
    for (int i=0; i<n; i++)
    {
        cout << arr1[i] << " ";
    }

    // Sorting begins
    cout << "\n\n";
    for(int i=n-2; i>=0; i--)
    {
        int flag = 1;
        for (int j=0; j<=i; j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                flag = 0;
                swap(arr1 + j,arr1+j+1);
            }
        }
        if(flag) break;
    }
    cout << "Sorted array ...\n";
    for(int i=0; i<n; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}

// Function declarations:
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}