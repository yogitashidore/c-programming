//Yogita shidore
//2/12/2022

#include<stdio.h>
int main()
{
	 //variable declaration
	int math, sic, hindi;
	//code
	printf("\nenter value of math:");
	scanf("%d", &math);
	printf("\nenter value of sic:");
	scanf("%d", &sic);
	printf("\nenter  value of hindi:");
	scanf("%d", &hindi);
	if (math >= 40 && sic>= 40 && hindi >= 40)
	{
		printf("\nPass");
	}
	else if (math >=40 && sic >=40 && hindi <=40)
	{
		printf("\nATKT: hindi");
	}
	else if (math >= 40 && sic <= 40 && hindi <= 40)
	{
		printf("\nATKT: sic, hindi");
	}
	else if (math <= 40 && sic >= 40 && hindi <= 40)
	{
		printf("\nATKT:math, hindi");
	}
	else if (math <= 40 && sic <= 40 && hindi >= 40)
	{
		printf("\nATKT: math, sic");
	}
	else if (math <= 40 && sic <= 40 && hindi <= 40)
	{
		printf("\nFail");
	}

	return(0);
}

