//(1) Write a program of to swap the two values using template.

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {

    int num1 = 5, num2 = 10;
    cout << "Before swapping - num1: " << num1 << ", num2: " << num2 <<endl;


    swapValues(num1, num2);

    cout << "After swapping - num1: " << num1 << ", num2: " << num2 <<endl;


    double double1 = 3.14, double2 = 2.71;
    cout << "Before swapping - double1: " << double1 << ", double2: " << double2 <<endl;


    swapValues(double1, double2);

    cout << "After swapping - double1: " << double1 << ", double2: " << double2 <<endl;

    return 0;
}

