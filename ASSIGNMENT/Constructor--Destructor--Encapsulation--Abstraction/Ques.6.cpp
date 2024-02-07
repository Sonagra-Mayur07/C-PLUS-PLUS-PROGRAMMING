//(6) Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor.

#include<iostream>
using namespace std;

class Employee
{
	string empName;
	int empid,Salary,Increment;
	
	
	public:
		
		Employee(string name,int id,int Slay)
		{
			empName=name;
			empid=id;
			Salary=Slay;
		}
		
		void get()
		{
			cout<<"\nEmployee Name :-" << empName <<"\n";
			
			cout<<"Employee id :- " <<empid <<"\n";
			
			cout<<"Employee Salary :- " <<Salary <<"\n";
		}
		
		void set()
		{
			cout<<"Enter Increment :- ";
			cin>>Increment;
		
		    Salary += Increment;

            cout << "Updated Salary: " << Salary << "\n";
		}
};

int main()
{	

cout<<":Employee member list: \n\n\n";

string name;
int id, salary;

	cout << "Enter Employee Name :- ";
	cin >> name;
	
	cout << "Enter Employee Id :- ";
	cin >> id;
	
	cout << "Enter Employee Salary :- ";
	cin >> salary;
	
	

	Employee emp(name, id, salary);
	
	emp.get();
	emp.set();
	
	return 0;
}
