#include<iostream>
using namespace std;
int main()
{
	int number,rem,rev=0;
	cout<<"enter number";
	cin>>number;
	int ori=number;
	while(number!=0)//522
	{
		rem=number%10;//2 2 5
		rev=rev*10+rem;//0*10+2=2 2*10+2=22  22*10+5=225
		number=number/10;//52
	}
	cout<<"reverse of "<<ori<<" is:"<<rev;
	if(ori==rev)
	{
		cout<<endl<<"number is palindrome";
	}
	else{
	
		cout<<endl<<"number is palindrome";
	}
	return 0;
}
