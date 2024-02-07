//(5) Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance).

#include <iostream>
using namespace std;

class student
{
public:
	int rollno[5];

};
class testmarks
{
public:
	
	int s1[5];
	int s2[5];

};
class result :public student,public testmarks
{
public:
	int total[5];
	
	int i;

	void input()
	{
     cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2 STUDENT DETAILS \xb2\xb2\xb2\xb2\xb2\xb2";
     for (int i=1;i<5;++i)
     {
         cout<<"\n\n\t\t ================= STUDENT ["<<i<<"] =================";
    	cout<<"\n\n\t\t Enter Roll Number    : ";
    	cin>>rollno[i];
    	cout<<"\n\n\t\t Enter English Marks  : ";
    	cin>>s1[i];
    	cout<<"\n\n\t\t Enter Computer Marks : ";
    	cin>>s2[i];


    }
}
    void display()
    {
     cout<<"\n\n\t\t\t\t \xb2\xb2\xb2\xb2 DISPLAY \xb2\xb2\xb2\xb2";
           
       for (int i=1;i<5;++i)
       {
         cout<<"\n\n\t\t ================= STUDENT ["<<i<<"] =================";
    	cout<<"\n\n\t\t Roll Number    : "<<rollno[i];
    	cout<<"\n\n\t\t English Marks  : "<<s1[i];
    	cout<<"\n\n\t\t Computer Marks : "<<s2[i];

    	cout<<"\n\n\t\t --------------------------------";
      total[i]=s1[i]+s2[i];
    	cout<<"\n\n\t\t\t\t TOTAL :- "<<total[i];
    
       }
    }
};  
int main(int argc, char const *argv[])
{
	result std;
	std.input();
	std.display();

	return 0;
}

