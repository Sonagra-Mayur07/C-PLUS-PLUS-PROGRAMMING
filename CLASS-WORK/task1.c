//(1) take value from user and check avlue is positive,negative or Zero

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) 
	{
        printf("The Enter number is positive: ");
    } 
	else if (number < 0)
    {
        printf("The Enter number is negative: ");
    }
	 else 
	{
        printf("The Enter number is zero: ");
    }

    return 0;
}

