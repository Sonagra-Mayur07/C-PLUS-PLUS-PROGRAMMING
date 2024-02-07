//(6) Write a C++ Program to show access to Private Public and Protected using Inheritance.

#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    Base() : privateVar(1), protectedVar(2), publicVar(3) {}

    void display() {
        cout << "Private: " << privateVar <<endl;
        cout << "Protected: " << protectedVar <<endl;
        cout << "Public: " << publicVar <<endl;
    }
};

class Derived : public Base {
public:
    void accessBaseMembers() {
        // Accessing public members of the base class
        cout << "Derived - Public: " << publicVar <<endl;

        // Accessing protected members of the base class
        cout << "Derived - Protected: " << protectedVar <<endl;

        // Cannot access private members of the base class directly
        // Uncommenting the line below will result in a compilation error
        // std::cout << "Derived - Private: " << privateVar << std::endl;
    }
};

int main() {
    Derived derivedObj;
    
    // Accessing public members of the base class using the derived object
   cout << "Main - Public: " << derivedObj.publicVar <<endl;

    // Cannot access protected and private members of the base class directly
    // Uncommenting the lines below will result in a compilation error
    // std::cout << "Main - Protected: " << derivedObj.protectedVar << std::endl;
    // std::cout << "Main - Private: " << derivedObj.privateVar << std::endl;

    // Using a member function in the derived class to access all members of the base class
    derivedObj.accessBaseMembers();

    return 0;
}

