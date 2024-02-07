//(1)Write a program to find the multiplication values and the cubic values using
//inline function.

#include<iostream>
using namespace std;


 int multiply(int a, int b) {
    return a * b;
}


 int cube(int num) {
    return num * num * num;
}

int main() {
    int num1, num2;


    cout << "Enter the first number:-  ";
    cin >> num1;

    cout << "Enter the second number:-  ";
    cin >> num2;


    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) <<endl;


    cout << "Cubic value of " << num1 << " is: " << cube(num1) <<endl;


    cout << "Cubic value of " << num2 << " is: " << cube(num2) << endl;

    return 0;
}



