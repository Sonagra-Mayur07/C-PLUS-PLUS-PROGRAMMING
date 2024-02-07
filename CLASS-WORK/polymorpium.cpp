// Overloading

#include<iostream>
using namespace std;

class calculator
{
	int no1,no2,result;
	
	public:
		void area(int l,int w)
		{
			cout<<l*w;
		}
		void area(double r)
		{
			cout<<3.14*r*r;
		}	
		void area(int s)
		{
			cout<<s*s;
		}
		void area(double h,double b)
		{
			cout<<0.5*h*b;
		}
};

int main()
{
	calculator obj;
	int choice;
	cout<<" 1 for rect \n 2 for circle \n 3 for sqaure \n 4 for tringle \n\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			obj.area(2,5);
			break;
			
		case 2:
			obj.area(5.5);
			break;
			
		case 3:
			obj.area(5);
			break;
			
		case 4:
			obj.area(2.5,8.5);
			break;
			
		default:
		cout<<"invalid choice";	
	}
	
	return 0;
}






