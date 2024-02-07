//Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;

class Rectangle{
	
		double length,width;
		
		public:
	
   void get()
	{
	    cout<<"Enter the length :- ";
		cin>>length;
		
		cout<<"Enter the width :- ";
		cin>>width;		
	}	
			
	 
	  void Area()
	  {
        cout<< "Area :- " << length * width;
      }

    void Perimeter()
	 {
        cout<< "\nPerimeter :- " << 2 * (length + width);
     }

   
};
int main()
{
	Rectangle obj;

    obj.get();
    obj.Area();
    obj.Perimeter();
	
	return 0;
}
