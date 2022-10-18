#include<stdio.h>
int main()
{
	//local varriable declaration
	float a = 50;
	float b = 100;
	float ans;

	//fun declaration
	float devision(int a, int b);

	//code
	ans = devision(a, b);
	printf("\nans=%f", ans);

	return(0);
}
 float devision(float a, float b)
{
	//local varriable declaration
	float devision;
	//code
	devision = a / b;

	return(devision);
}
