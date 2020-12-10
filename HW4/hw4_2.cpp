/*
Exercise 2: Write a program and input two integers in main and 
pass them to default constructor of the class. Show the result of the additon of two numbers.
*/

#include <iostream>

using namespace std;


class operation
{
private:

    int a;
    int b;

public:
    // Constructor
    void Create(int a, int b);

    // Addition
    int add (){return a + b;}
    
};

void operation::Create(int a, int b)
{
    this->a = a;
    this->b = b;
}

int main ()
{

    operation f;

    f.Create(9, -4);
    cout <<"The sum of the 2 terms is " << f.add()<< "." << endl;

    return 0;
}
