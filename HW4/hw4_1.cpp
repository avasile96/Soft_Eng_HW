#include <iostream>

using namespace std;

// Exercise 1: Write a class having two private variables and one member function which will return the area of the rectangle.
class rectangle
{
private:

    float length;
    float width;

public:

    // Area of the rectangle
    float area (float length, float width){return length * width;}
    
};

int main ()
{

    rectangle rekty;
    cout <<"The area of the rectangle is " << rekty.area(2, 3)<< "." << endl; // Test

    return 0;
}
