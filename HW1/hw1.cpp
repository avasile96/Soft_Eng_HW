#include <iostream>
#include <stdlib.h>
#include <tuple>
#include <cstdio>
#include <cmath>

//Functions Problem 1
double surf(double);
double circum(double);

//Functions Problem 2
void minimax(unsigned height, unsigned width);

//Functions Problem 3
int fibo(int);

//Functions Problem 4
int multi_tab(int);

//Functions Problem 5
void AND_OR_tt();

int main()
{
    //Problem 1: Write a program which allows to compute the Area and circumference of a circle.
    printf("\n");
    std::cout<<std::endl;
    std::cout<<"Problem 1"<<std::endl;
    double d;
    std::cout << "Diameter: ";
    std::cin >> d;
    double area = surf(d);
    double crc = circum(d);
    std::cout << "The area of the circle is: " << area << std::endl;
    std::cout << "The circumference of the circle is: " << crc << std::endl;
    printf("\n");

    //Problem 2: Write a function which allows to find the max and the min of a table.
    std::cout<<std::endl;
    std::cout<<"Problem 2"<<std::endl;
    printf("Creating a random-value table\n");
    int h;
    std::cout << "Height of the random table: ";
    std::cin >> h;
    int w;
    std::cout << "Width of the random table: ";
    std::cin >> w;
    minimax(h, w);
    printf("\n");

    //Problem 3: Write a function which allows to compute the Fibonacci sequence.
    std::cout<<std::endl;
    std::cout<<"Problem 3"<<std::endl;
    int r;
    std::cout<<"Specify the rank of the Fibonacci series: "<<std::endl;
    std::cin>>r;
    std::cout<<"The Fibonacci series of rank "<<r<<" is: ";
    fibo(r);
    printf("\n");

    //Problem 4: Write a function which allows to display in the terminal any multiplication table.
    std::cout<<std::endl;
    std::cout<<"Problem 4"<<std::endl;
    int x;
    std::cout << "Value for which you want the multiplication table: ";
    std::cin >> x;
    multi_tab(x);
    printf("\n");

    //Problem 5: Write a function which allows to compute the truth table of the "and" and "or" operators
    std::cout<<std::endl;
    std::cout << "Problem 5" << std::endl;
    AND_OR_tt();

    return 0;
}


//Problem 1
double surf(double ci)
{
    double area = 3.1416 * pow(ci / 2 * 3.1416, 2);
    return area;
}

double circum(double d)
{
    double circ = 3.1416 * d;
    return circ;
}

//Problem 2
void minimax(unsigned height, unsigned width)
{
    int** array2D = 0;
    array2D = new int*[height];

    for (int h = 0; h < height; h++)
    {
        array2D[h] = new int[width];

        for (int w = 0; w < width; w++)
        {
                array2D[h][w] = rand();
        }
    }
    int maxElement = array2D[0][0];

    for (int i = 0; i < height; i++) { 
        for (int j = 0; j < width; j++) { 
            if (array2D[i][j] > maxElement) { 
                maxElement = array2D[i][j]; 
            } 
        } 
    }

    int minElement = array2D[0][0];
    for (int i = 0; i < height; i++) { 
        for (int j = 0; j < width; j++) { 
            if (array2D[i][j] < minElement) { 
                minElement = array2D[i][j]; 
            } 
        } 
    }
    std::cout<<"Biggest value in the table is: "<<minElement <<std::endl;
    std::cout<<"Smallest value in the table is: "<<maxElement <<std::endl;
} 

//Problem 3
int fibo(int a)
{
    int f1 = 0;
    int f2 = 1;
    int i = 0;
    int f3 = 0;
    do
    {
        i++;
        std::cout<<f1<<" ";
        f3 = f1+f2;
        f1 = f2;
        f2 = f3;
    }
    while(i<a);
    return 0;
}

//Problem 4
int multi_tab(int n)
{
    std::cout<<"The multiplication table of "<<n<<" is: "<<std::endl;
    for(int i=1;i<11;i++)
    {
        int result = n * i;
        std::cout<<n<<" x "<<i<<" = "<<result<<std::endl;
    }
    return 0;
}

//Problem 5
void AND_OR_tt () {
    int X = 1;
    int Y = 1;
    int Z = 1;
    bool out;

    std::cout << "Truth table of AND" <<std::endl;
    for (int i = 0; i <= X; i++) {
        for (int j = 0; j <= Y; j++) {
            for (int k = 0; k <= Z; k++) {
                out = i && j && k;
                std::cout << i << " & " << j << " & " << k << " ==> " << out << std::endl;
            }
        }
    }
    std::cout << "\n" << std::endl;

    std::cout << "Truth table of OR" <<std::endl;
    for (int i = 0; i <= X; i++) {
        for (int j = 0; j <= Y; j++) {
            for (int k = 0; k <= Z; k++) {
                out = i || j || k;
                std::cout << i << " || " << j << " ||" << k << " ==> " << out << std::endl;
            }
        }
    }

}
