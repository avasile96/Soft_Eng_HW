/*
Write a C++ program that will prompt the user to input ten integer values
The program will display the smallest and greatest of those values. It also displays the value that occurs the most.
*/

#include <iostream>
using namespace std;


// Functions (declaration)
int minim(int vector[]);
int maxim(int vector[]);
int mov(int vector[]);
int i;

int main()
{
    int vector[10] = {0};
	cout << "Please input 10 values: " << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> vector[i];
	}

    cout << "The minimum of the inputed vector is " << minim(vector) << endl;
    cout << "The maximum of the inputed vector is " << maxim(vector) <<endl;
    cout << "The most occured value in the inputed vector is " << mov(vector) <<endl;
}

int minim(int vector[])
{
    int min = vector[0];
    for (int i = 0; i < 10; i++)
	{
		if (vector[i] < min)
        {
			min = vector[i];
        }
	}
    return min;
}

int maxim(int vector[])
{
    int max = vector[0];
	for (int i = 0; i < 10; i++)
	{
		if (vector[i] > max)
			max = vector[i];
    }
    return max;
}

int mov(int vector[])
{
    int max_count = 0;
    int sz = 10;
    int result = 0;

    for (int i = 0; i < sz; i++)
    {
        int count = 1;
        for (int j = i+1; j < sz; j++)
        {
            if (vector[i] == vector[j])
            {
                count++;
            }
            if (count > max_count)
            {
                max_count = count;
            }
        }
    }

    for (int i = 0; i < sz; i++)
    {
        int count = 1;
        for (int j = i+1; j < sz; j++)
        {
            if (vector[i] == vector[j])
            {
                count++;
            }
            if (count == max_count)
            {
                result = vector[i];
            }
        }
    }
return result;
}