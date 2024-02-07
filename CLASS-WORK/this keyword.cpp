//this keyword is an implicit pointer that points to the object of the class of which the member function is called
#include<iostream>
using namespace std;
class animal{
	int roll;
	public:
		animal(int roll)
	{
		this->roll=roll;//
	
	}	
	void display()
	{
		cout<<roll;
	}
};
int main()
{
	animal obj(2);
	obj.display();
	return 0;
	
}
