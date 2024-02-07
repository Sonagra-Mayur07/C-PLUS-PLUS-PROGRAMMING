//(2) Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Shape {
protected:
    double length,breadth;

public:

    void inputDimensions() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
};

class Rectangle : public Shape {
public:

    double calculateArea() const {
        return length * breadth;
    }
};

int main() {
    Rectangle rectangle;  

    rectangle.inputDimensions();

    cout << "Area of Rectangle: " << rectangle.calculateArea() <<endl;

    return 0;
}

