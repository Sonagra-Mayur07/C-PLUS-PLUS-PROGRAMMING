// (2)WAP to create simple calculator using class.

#include<iostream>
using namespace std;
class calculator{
	int num1,num2,result;
	public:
	char ope;
	public:
		void menu()
		{
			cout<<"\xb2\xb2\xb2\xb2\xb2\xb2 welcome to the calculator \xb2\xb2\xb2\xb2\xb2\xb2"<<endl<<endl;
			
			cout<<" enter + for addition \n enter - for subtraction\n enter * for multiplication \n enter / for division \n"<<endl;
		}
		void ope_get()
		{
			cout<<" enter your choice :-  ";
			cin>>ope;
		}
		void value_get()
		{
			cout<<" enter number 1 :-  ";
			cin>>num1;
			cout<<" enter number 2 :-  ";
			cin>>num2;
		}
		int add()
		{
			return num1+num2;
		}
		int sub()
		{
			return num1-num2;
		}
	    int mut()
		{
			return num1*num2;
		}
         int div()
		{
			return num1/num2;
		 } 		
};

int main()
{
	calculator obj;
	obj.menu();
	obj.ope_get();
	switch(obj.ope)
	{
		case '+':
			obj.value_get();
			cout<<" addition is :- "<<obj.add();
				break;
		case '-':	
			obj.value_get();
			cout<<" subtraction is :- "<<obj.sub();
			break;
			
		case '*':
			obj.value_get();
			cout<<" multiplication is :- "<<obj.mut();
				break;
		
		case '/':
			obj.value_get();
			cout<<" for division :- "<<obj.div();
				break;	
					
		default:
		cout<<" invalid choice";
		break;	
	}
	
	
	return 0;
}
