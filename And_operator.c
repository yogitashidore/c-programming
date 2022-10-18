//write a program , year is leap or not.

#include<stdio.h>
int main()
{
	int year;
	printf("enter a year:");
	scanf("%d", &year);

	if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
	{
		printf("\n%d is leap year", year);
	}
	else
	{
		printf("\n%d is not leap year", year);
	}
	return(0);
}
