/*
Calculator menu.
MENU  
          1. Add  
          2. Subtract  
          3. Multiply  
          4. Divide  
          5. Modulus  
Enter your choice: 1  
Enter your two numbers: 12 15  
Result: 27
Continue? y  
The program also asks the user to decide whether he/she wants to continue the operation. If he/she input ‘y’, the program will prompt the user to choose the operation gain. Otherwise, the program will terminate.
*/

#include <iostream>
using namespace std;


// Functions (declaration)
void menu();
float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);
float modulo(int a , int b);

int main()
{
	int op = 0;
	float a = 0, b = 0;
	char key_in;

	while (true)
	{
        menu();
		cout << "Select number of operation: " << endl;
		cin >> op;

		if (op < 1 || op > 5 )
		{
			cout << "Invalid number, please choose a number between 1 and 5." << endl;
			continue;
		} 

		cout << "First number: " << endl;
		cin >> a;
        cout << "Second number: " << endl;
        cin >> b;

		switch (op)
		{
			case 1:
				cout << "The result of " << a << " + " << b << " is " << addition(a, b) << endl;
				break;
			case 2:
				cout << "The result of " << a << " - " << b << " is " << subtraction(a, b) << endl;
				break;
			case 3:
				cout << "The result of " << a << " x " << b << " is " << multiplication(a, b) << endl;
				break;
			case 4:
            if (b != 0)
				cout << "The result of " << a << " / " << b << " is " << division(a, b) << endl;
                else
                {
                    cout << "Division by 0 is impossible for real numbers!" << endl;
                }
                
				break;
			case 5:
				cout << "The result of " << a << " modulo " << b << " is " << modulo(a, b) << endl;
				break;
		}

		cout << "Continue with another operation (type Y/N and hit ENTER)... " << endl;
		cin >> key_in;

		if (key_in == 'y' || key_in == 'Y')
			;
		else
			break;

	}

}

// Functions

float addition(float a, float b)
{
	return a + b;
}

float subtraction(float a, float b)
{
	return a - b;
}

float multiplication(float a, float b)
{
	return a * b;
}

float division(float a, float b)
{
	return a / b; 
}

float modulo(int a, int b)
{
	return a % b;
}

void menu()
{
	cout << "MENU" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Modulus" << endl;
}