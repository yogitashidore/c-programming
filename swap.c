// swaping number
#include<stdio.h>
int main()
{
	// local variable declaration
	int n1 = 10;
	int n2 = 20;
	int n3 = 0;

	printf("\nbefore swapping");
	printf("\nvalue of n1 is %d", n1);
	printf("\nvalue of n2 is %d", n2);

	n3 = n1;
	n1 = n2;
	n2 = n3;

	printf("\nafter swapping");
	printf("\nvalue of n1 is %d", n1);
	printf("\nvalue of n2 is %d", n2);

		return(0);
}
