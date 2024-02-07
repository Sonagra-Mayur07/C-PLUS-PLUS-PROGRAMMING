#include<iostream>
using namespace std;
int sum(int x, int y);
int main()
{
	int x,y;
	cout<<"enter two values";
	cin>>x>>y;
	cout<<sum(x,y);

	return 0;	
}
int sum(int x,int y)
{
	
	return x+y;
}
