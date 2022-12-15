#include<stdio.h>
int main()
{
	printf("\n program started");
	goto  error;
	printf("\n this will never exicute");

error:
	printf("\n error, clean up action");
	return(0);
}

//output: error, clean up action
