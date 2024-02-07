//(3) Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.


#include<iostream>
using namespace std;

class Car
{
	
	string company,model;
	int year;
	
	public:
		
		void get()
		{
			cout<<"Enter Your company Name :- ";
			cin>>company;
			
			cout<<"Enter Your model :- ";
			cin>>model;
			
			cout<<"Enter Your year :- ";
			cin>>year;
			
		}
		
		void set()
		{
			cout<<"\n\nYour Information : \n\n My Name is :- "<< company << "\n  Age is :- " << model <<" \n  country is :- "<< year;
		}
	
};

int main()
{
	
	Car obj;
	
	obj.get();
	obj.set();
	
}
