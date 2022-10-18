// swaping number using function
#include<stdio.h>
//global variable
int n1 = 10;
int n2 = 20;

int main()
{
	

	//fun declaration
	void swap(int,int);


	printf("\nbefore swapping");
	printf("\nvalue of n1 is %d", n1);
	printf("\nvalue of n2 is %d", n2);
     
     // fun call
	swap(n1,n2);
	printf("\nafter swapping");
	printf("\nvalue of n1 is %d", n1);
	printf("\nvalue of n2 is %d", n2);

	return(0);
}
   void swap()
   
{
	//local variable declaration
	int n3 = 0;
	n3 = n1;
	n1 = n2;
	n2 = n3;

}
