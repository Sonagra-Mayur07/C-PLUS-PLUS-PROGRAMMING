#include<iostream>
using namespace std;
int main()
{
	int i=1,end;
	cout<<"enter end point";
	cin>>end;
//	for(i=1;i<=end;i++)
//	{
//		cout<<i<<"\t";
//	}
	/*while(i<=end)
	{
		cout<<i<<"\t";
		i++;
	}*/
	do{
		cout<<i<<"\t";
		i++;
	}while(i<=end);
	return 0;
}
