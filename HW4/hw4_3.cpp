/*
Exercise 3: Perform  addition  operation  on  complex  data  using  class  and  object.  
The  program should ask for real and imaginary part of two complex numbers, and display the real and imaginary parts of their sum.
*/

#include <iostream>

using namespace std;


class cmplx
{
private:

    int real;
    int img;

public:

    // Replaces the current complex number with the sum of 2 complex numbers (z_current = z1 + z2)
    void is_sum_of(cmplx z1, cmplx z2)
    {
        this->real = z1.real + z2.real;
        this->img = z1.img + z2.img;
    }

    // Display complex number
    void display()
    {
        cout << real << "+" << img << "i";
    }

    // Get the real and imaginary part of the complex number
    void get_comp_val()
    {
        cin>>real;
        cin>>img;
    }
    
};

int main ()
{

    cmplx z1, z2, z_sum;

    cout << "The real and imaginary part of the 1st term of the addition are, respectively: " << endl;
    z1.get_comp_val();

    cout << "The real and imaginary part of the 2nd term of the addition are, respectively: " << endl;
    z2.get_comp_val();

    z_sum.is_sum_of(z1, z2);
    cout << "The sum of the 2 complex numbers is: ";
    z_sum.display();
    cout << "." << endl;

    return 0;
}
