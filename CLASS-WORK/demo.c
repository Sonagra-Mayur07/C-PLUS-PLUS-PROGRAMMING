#include<stdio.h>
void main()
{
	int  i,a,b=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter %d value :- ",i+1);
		scanf("%d",&a);
		
		b=a+b;
		
	}
	printf("average of 5 values :- %d",b/5);
}
