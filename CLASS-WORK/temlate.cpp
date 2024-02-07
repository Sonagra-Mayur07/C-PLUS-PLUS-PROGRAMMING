// temlate---derived datatype

#include<iostream>
using namespace std;
template <typename T>

T max_number(T no1,T no2)
{
	if(no1>no2)
	{
		return no1;
	}
	else{
		return no2;
	}
};

int main()
{
	cout<<"int value is :- "<<max<int>(3,5)<<endl;
	cout<<"float value is :- "<<max<float>(5.8,9.2)<<endl;
	cout<<"float value is :- "<<max<char>('j','k')<<endl;
	
	
	return 0;
}
