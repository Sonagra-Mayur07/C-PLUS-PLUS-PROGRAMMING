#include<iostream>
using namespace std;
int main()
{
	int end,i=1,n1=0,n2=1,n3=n1+n2;
	cout<<"enter end point";
	cin>>end;
	cout<<n1<<"\t"<<n2<<"\t"<<n3<<"\t";
	while(i<=end-3)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		cout<<n3<<"\t";
		i++;
	}
	
	return 0;
}
