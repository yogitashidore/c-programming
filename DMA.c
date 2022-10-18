//Dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	//local variable declaration
	int* p = NULL;

	//code
	p = malloc(sizeof(int));   //allocation memory in heap section

	if (p == NULL)
	{
		printf("\n memory allocation failed");
		exit(1);
	}
	  //write
	*p = 10;
	//read
	printf("\n value=%d", *p);

	//free allocated memory from heap
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
	return(0);


 }
