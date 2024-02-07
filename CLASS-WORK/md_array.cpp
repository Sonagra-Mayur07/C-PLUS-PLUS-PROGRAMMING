#include<iostream>
using namespace std;
int main()
{
	int array[100][100],r,c,i,j;
	cout<<"enter total rows";
	cin>>r;
	cout<<"enter total coloums";
	cin>>c;
	cout<<"enter total"<<r*c<<"values";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>array[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<array[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
