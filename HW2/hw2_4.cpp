/*
Pascal triangle

This is another classic C++ exercise about using two-dimensional array of C++. 
By using two-dimensional array, write C++ program to display a table that represents a Pascal triangle of any size. 
In Pascal triangle, the first and the second rows are set to 1. 
Each element of the triangle (from the third row downward) is the sum of the element directly above it and the
element to the left of the element directly above it. See the example Pascal triangle(size=5) below:

1				
1	1			
1	2	1		
1	3	3	1	
1	4	6	4	1

*/

#include <iostream>

using namespace std;

void Pascal_Triangle(int size)
{
    int arr[size][size];

    for (int line = 0; line < size; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            if (line == i || i == 0)
                arr[line][i] = 1;
            else
                arr[line][i] = arr[line - 1][i - 1] +
                arr[line - 1][i];
            cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}


int main()
{
    int size;
    cout << "enter pascal triangle size";
    cin >> size;
    Pascal_Triangle(size);
    return 0;
}
