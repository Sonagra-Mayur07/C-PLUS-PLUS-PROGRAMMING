#include<iostream>
using namespace std;
int main()
{
	int array[100],num,i;
	cout<<"how many values you want to enter?";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<num;i++)
	{
		cout<<array[i]<<"\t";
	}
	return 0;
}
