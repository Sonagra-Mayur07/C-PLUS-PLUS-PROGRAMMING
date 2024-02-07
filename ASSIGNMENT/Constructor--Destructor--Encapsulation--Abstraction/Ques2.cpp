//(2)Write a program of Addition, Subtraction, Division, Multiplication using
//constructor.

#include <iostream>
using namespace std;

class Calculator {
    int num1, num2;

public:

    Calculator(int n1, int n2) 
	{
		num1=n1;
		num2=n2;
	}

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    int multiply() {
        return num1 * num2;
    }

    int divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Cannot divide by zero" << endl;
            return 0;
        }
    }
};

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    Calculator obj(num1, num2);

    cout << "Sum: " << obj.add() << endl;
    cout << "Difference: " << obj.subtract() << endl;
    cout << "Product: " << obj.multiply() << endl;
    cout << "Quotient: " << obj.divide() << endl;

    return 0;
};


