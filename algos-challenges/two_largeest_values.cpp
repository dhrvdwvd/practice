#include<iostream>
using namespace std;

int main()
{
    int size, first, second;
    float the_array[25];
    cout << "Enter the size of the array: ";
    cin >> size;
    for(int i=0; i<size; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> the_array[i];
    }
    cout << "You entered the following: \n";
    for(int i=0; i<size; i++)
    {
        cout << "Element [" << i << "]: " << the_array[i] << "\n";
    }
    if(the_array[0]>the_array[1])
    {
        first = the_array[0];
        second = the_array[1];
    }
    else
    {
        first = the_array[1];
        second = the_array[0];
    }
    for(int i=2; i<size; i++)
    {
        if(the_array[i]>first)
        {
            second=first;
            first=the_array[i];
        }
        else
        {
            if(the_array[i]>second)
            {
                second = the_array[i];
            }
        }
    }
    cout << "largest: " << first << " and second largest: " << second;
    return 0;
}