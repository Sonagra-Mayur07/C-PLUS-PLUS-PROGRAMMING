//(5) Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;

class Triangle {
	
	    int side1, side2, side3;
	    
	    public:
	    	
	    	Triangle(int side1,int side2 ,int side3)
	    	{
	    		side1=s1
	    		side2=s2
	    		side3=s3
			}
			
			
			
			void main()
			{
				 if (myTriangle.Equilateral())
				  {
                   cout << "The triangle is equilateral." <<endl;
                  } 
                	else if (myTriangle.Isosceles()) 
	              {
                     cout << "The triangle is isosceles." <<endl;
                  }
	                 else if(myTriangle.Scalene())
	              {
                    cout << "The triangle is scalene." <<endl;
                  } 
                	else
              	  {
                     cout << "Invalid triangle." <<endl;
                  }
			}
			
};



int main()
{
	int s1,s2,s3;
	
	Triangle obj (s1,s2,s3);
	
	
}
