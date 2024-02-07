#include<iostream>
using namespace std;
int main()
{
	int ch,l,w,r,area;
	cout<<"1 circle\n2 rectangle"<<endl;
	cout<<"enter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter radius";
			cin>>r;
			area=3.14*r*r;
			cout<<"area of circle is"<<area;
			break;
			
			case 2:
				cout<<"enter length and width";
				cin>>l>>w;
				area=l*w;
				cout<<"area of rectangle is"<<area;
				break;
				
				default:
					cout<<"invalid choice";
	}
	
	return 0;
}
