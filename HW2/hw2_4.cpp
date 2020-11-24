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


//Function declaration
void pascal_tr(int sz);

int main()
{
    int sz;
    cout << "Which size would you like the Pascal Triangle to be?" <<endl;
    cin >> sz;

    cout << "Here it is! " <<endl;
    pascal_tr(sz);
    return 0;
}

void pascal_tr(int sz) // l = line ; c = column ; sz = size
{
    int array[sz][sz];

    for (int l = 0; l < sz; l++)
    {
        for (int c = 0; c <= l; c++)
        {
            if (l == c || c == 0)
            {
                array[l][c] = 1;
            }
            else
            {
                array[l][c] = array[l-1][c-1] + array[l-1][c];
            }
            cout << array[l][c] << " ";
        }
        cout << "\n"; // line incrementation on display
    }
}
