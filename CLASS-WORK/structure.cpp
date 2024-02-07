#include<iostream>
using namespace std;
struct employee{
	int roll_no;
	string name;
	
};
int main()
{
	struct employee e1[5];
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"enter name for "<<i+1<<" student";
		cin>>e1[i].name;
		cout<<"enter roll number for "<<i+1<<" student";
		cin>>e1[i].roll_no;
	}

	for(i=0;i<2;i++)
	{
		cout<<"details of "<<i+1<<" student"<<endl;
		cout<<e1[i].roll_no<<endl;
		cout<<e1[i].name<<endl;
	}

	return 0;
}
//10 students name and roll_no store:

