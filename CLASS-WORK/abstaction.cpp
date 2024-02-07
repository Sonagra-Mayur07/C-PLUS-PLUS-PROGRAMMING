// abstaction is used to hide implemation part of code 
// only essesntial informationis dispalayed in the program.

#include<iostream>
using namespace std;

class employee{
	int id;
	string name;
	
	public:
		void get()
		{
			cout<<"Enter id and name";
			cin>>id>>name;
		}
		
		void display()
		{
			cout<<id<<name;
		}
		
};

int main()
{

employee obj;


obj.get();
obj.display();

	return 0;
}
