#include<iostream>
using namespace std;
int rectangle(int l,int w)//retruen with arg
{
	return l*w;
}
void sqaure(int s)//no return with arg
{
	cout<< s*s;
}
void circle()//no return no arg
{
	int r=5;
	cout<<"area of circle"<<3.14*r*r;
}
int tringle()//return with no arg
{
	int b=5,h=3;
	return 0.5*b*h;
}
int main()
{
	int l=5,w=8;
	cout<<"area of rectangle is"<<rectangle(l,w);
	sqaure(5);
	circle();
	cout<<"area of tringle is"<<tringle();
	return 0;
}
