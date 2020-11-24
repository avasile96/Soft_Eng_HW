/*
Pointer : max value

By using C++ pointer, write a C++ program to find the max of an integral data set. The program will ask the user to input the number of data values in the set and each value. Then your program will show the max of the data set. See example below.  Your C++ program will use a function that accepts the array of data values and its size. The return from the function is the pointer that points to the max value.

  Enter number of data values: 3
  Enter value 1: 21
  Enter value 2: 12
  Enter value 3: 4
  The max is 21. 
  Result: 2/9 
*/

#include <iostream>

using namespace std;

int * sort_with_pointer(int array[], int size)
{
    int * max = array;
    
    for (int i = 0; i < size; i++)
    {
        if (*max < array[i])
            *max = array[i];
    }
    return max;
    
}

int main()
{
    int size;
    
    cout << "Enter dataset size" << endl;
    cin >> size;
    
    int array[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "enter value" << i << endl;
        cin >> array[i];
    }
    
    
    int * max_value = sort_with_pointer(array,size);
    cout << *max_value;
    return 0;
}
