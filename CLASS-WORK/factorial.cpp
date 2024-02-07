#include<iostream>
using namespace std;
int main()
{
	int i,fact=1,num;
	cout<<"enter number to find factorial";
	cin>>num;
	for(i=1;i<=num;i++)//3 1<=3  2<=3 3<=3
	{
		fact=fact*i;//fact=1*1=1  fact=1*2=2 fact=2*3=6
	}
	cout<<"factorial of "<<num<<"is:"<<fact;
	return 0;
}
