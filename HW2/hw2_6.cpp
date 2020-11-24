/*
Write a program to accept five integer values from keyword.

The five values will be stored in an array using a pointer. Then print the elements of the array on the screen.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {};
    int *ptr = arr;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Value #" << i <<": ";
        cin >> *ptr++;
    }
    
    cout << "The inputed values are: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
