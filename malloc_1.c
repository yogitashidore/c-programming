#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
	// local Variables
	int* p = NULL;

	// Allocate the memory
	p = (int*)malloc(sizeof(int));
	// error checking
	if (p == NULL)
	{
		printf("\nEnable to allocate memory on heap for p");
		exit(0);
	}

	// zero out the memory
	memset(p, 0, sizeof(int));

	// use the allocated memory
	*p = 10;
	printf("\n*p = %d", *p);

	// free the allocated memory after use
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}

	return(0);
}



