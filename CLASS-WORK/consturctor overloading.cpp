//overloading means same name diffrent task with diffrent types of parameter
#include<iostream>
using namespace std;
class employee{
	
	int a,p,q;
	public:
	employee(int x)
	{
		a=x;
		cout<<a;
	}
	employee(){
		cout<<"hello default con.";
	}
	employee(int z,int y)
	{
		p=z;
		q=y;
		cout<<"p and q is"<<p<<q;
	}
	
	
};
int main()
{
	employee obj(5,9);
	employee obj1;
	
	return 0;
}
