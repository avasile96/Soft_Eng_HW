/*
Write a C++ program (using function) to sort 10 integer values
*/

#include<iostream>
using namespace std;


//Function declaration
void select_sort(int x[], int n);

int main() 
{
    int x[] = {3, -100, 24, 69, 4, 8, 20, 31, 13, 60};
    int n = sizeof(x)/ sizeof(x[0]);
    int i;

    cout << "Given array is:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << x[i] <<" ";
    }

    select_sort(x, n);

    cout << endl << "Sorted array is: " << endl;
    for (i = 0; i < n; i++)
    {
        cout<< x[i] <<" ";
    }
    cout << endl;
}

void select_sort(int x[], int n) {
    int i, j, min_idx, tmp;
    for (i = 0; i < n-1; i++) 
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
            if (x[j] < x[min_idx])
            {
                min_idx = j;
            }
        }
        tmp = x[i];
        x[i] = x[min_idx];
        x[min_idx] = tmp;
    }
}