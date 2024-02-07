//(11) Write a program to calculate the area of circle, rectangle and triangle
//using Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area

#include<iostream>
using namespace std;

class calculate
{
	public:
		
	void area(int length, int width)
	{
		cout << "\n\nArea of Rectangle :- " << length * width;
	}
	
	void area(double base, double height)
	{
		cout << "\nArea of Triangle  :- " << 0.5 * base * height;
	}
	
	void area(int radius)
	{
		cout << "\nArea of Circle :- " << 3.14 * radius * radius;
	}
	
};

int main()
{
	
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Function Overloading \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	calculate obj;
	
	obj.area(5, 3);
	
	obj.area(5.4, 3.14);
	
	obj.area(5);
	
	return 0;
}
