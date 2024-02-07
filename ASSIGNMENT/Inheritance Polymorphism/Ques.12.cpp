//(12) Write a program to swap the two numbers using friend function without using third variable.


#include <iostream>
using namespace std;

class Nswapper {
private:
    int num1;
    int num2;

public:

    Nswapper(int a, int b) : num1(a), num2(b) {}

 
    friend void Snumbers(Nswapper& ns);

  
    void display() const {
        cout << "Number 1: " << num1 <<endl;
        cout << "Number 2: " << num2 <<endl;
    }
};


void Snumbers(Nswapper& ns) {

    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() {

    Nswapper numbers(5, 10);

    cout << "Original Numbers:- \n";
    numbers.display();


    Snumbers(numbers);

    cout << "\nNumbers after swapping:- \n";
    numbers.display();

    return 0;
}


