/*
Pointer : max value

By using C++ pointer, write a C++ program to find the max of an integral data set. 
The program will ask the user to input the number of data values in the set and each value. 
Then your program will show the max of the data set. See example below.  
Your C++ program will use a function that accepts the array of data values and its size. 
The return from the function is the pointer that points to the max value.

  Enter number of data values: 3
  Enter value 1: 21
  Enter value 2: 12
  Enter value 3: 4
  The max is 21. 
  Result: 2/9 
*/

#include <iostream>
using namespace std;

// Function declaration
int * pointer_max(int arr[], int sz);

int main()
{
    int n;
    cout << "Enter number of data values: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i << ": ";
        cin >> arr[i];
    }
    
    
    int *max_val = pointer_max(arr,n);
    cout << "The max is: " << *max_val << endl;
    return 0;
}

int *pointer_max(int arr[], int sz)
{
    int *max = arr;
    
    for (int i = 0; i < sz; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
        }
    }
    return max;
}
