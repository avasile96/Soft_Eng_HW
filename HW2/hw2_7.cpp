/*
Write a C++ function to sort an array of ten integer values in ascending order. 
The function will accept two arguments-- a pointer that points to the array and the array size. 
The function returns a pointer that points to the sorted array.
*/

#include <iostream>
using namespace std;


//Function declaration
int *ptr_sort_arr(int* arr, int sz);

int main()
{
	int array[10] = {100, 30, -14, 49, -57, 30, 150, 98, 96, 42};
    cout << "Unsorted array: " ;
    for(int i=0; i<10;i++)
    {
	    cout << array[i] << " ";
    }
    cout << endl;

	int *sort_arr = ptr_sort_arr(array, 10);

    cout << "Sorted array: ";
	for(int i=0; i<10;i++)
    {
	    cout << *sort_arr++ << " ";
    }
    cout << endl;
}

int *ptr_sort_arr(int* arr, int sz)
{
	int *z = arr;
	int *arr_plus_1 = arr + 1;
	int tmp = 0;
	
	for(int i = 0; i <= sz; i++)
	{		
		for(int j = i+1 ; j < sz; j++)
		{
			if(*arr > *arr_plus_1)
			{
				tmp  = *arr;
				*arr = *arr_plus_1;
				*arr_plus_1 = tmp;
			}
			arr++;
			arr_plus_1++;
		}
		arr = z;
		arr_plus_1 = z + 1;
	}
	return arr;
}
