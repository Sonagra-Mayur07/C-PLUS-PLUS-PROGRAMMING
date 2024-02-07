// encapsulation is a process of binding data and method together.


#include<iostream>
using namespace std;

class area{
	
	int width,height;
	
	public:
		
		void result()
		{
			cout<<"Enter height and width";
			cin>>height>>width;
			
			cout>>"area is "<<width*height;
		}
};

int main()
{
	area a1;
	
	a1.result();
	
		return 0;
}
