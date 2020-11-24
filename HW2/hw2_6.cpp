/*
Write a program to accept five integer values from keyword.

The five values will be stored in an array using a pointer. Then print the elements of the array on the screen.
*/

#include <iostream>

using namespace std;

int main()
{
    int array[5];
    int * ptr = array;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "enter value" << i << endl;
        cin >> *ptr++;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    
   
    return 0;
}
