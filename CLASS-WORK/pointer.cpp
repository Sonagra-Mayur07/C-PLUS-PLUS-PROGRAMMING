#include<iostream>
using namespace std;
int main()
{
	int num=10;
	int *ptr=&num;
	cout<<num;//10
	cout<<endl<<&num<<endl;//print location threw variable
	
	cout<<ptr<<endl;//address
	cout<<*ptr<<endl;//de ref//print threw pointer variable
	
	//num=25;//update threw variable;
	
	*ptr=25;//update threw pointer variable
	cout<<*ptr;
	cout<<num;
	return 0;
}
