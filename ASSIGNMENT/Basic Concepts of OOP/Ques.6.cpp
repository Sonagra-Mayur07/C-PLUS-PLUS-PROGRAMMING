//Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include<iostream>
using namespace std;

class Person
{
	
	string name,country;
	int age;
	
	public:
		
		void get()
		{
			cout<<"Enter Your Name :- ";
			cin>>name;
			
			cout<<"Enter Your age :- ";
			cin>>age;
			
			cout<<"Enter Your country :- ";
			cin>>country;
			
		}
		
		void set()
		{
			cout<<"\n\nYour Information : \n\n My Name is :- "<< name << "\n  Age is :- " << age <<" \n  country is :- "<< country;
		}
	
};

int main()
{
	
	Person obj;
	
	obj.get();
	obj.set();
	
}

