#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

int main()
{
	// function declaration
	void* MyCalloc(int, int);
	
	// Local Variale Declaration
	int* p = NULL;
	int num = 0;

	// code
	printf("\n Enter Value:");
	scanf("%d", &num);

	// p = malloc(50 * sizeof(int)); // allocate memory in Heap section
	// p = calloc(50, sizeof(int));
	p = (int *) MyCalloc(10, sizeof(int));

	if (p == NULL)
	{
		printf("\nNot enough memory available to allocate, malloc() Failed, Hence exiting");
		exit(1);
	}
	
	printf("\n size of p = %d", 10 * sizeof(int));

	// write
	for (int i = 0; i < 10; i++)
	{
		p[i] = (i + 1) * num;
	}

	// read
	for (int i = 0; i < 10; i++)
	{
		printf("\n %d", p[i]);
	}

	// free the allocated memory from Heap
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}

	return(0);
}

void* MyCalloc(int count, int size)
{
	// Local Variable Declarations
	void* p = NULL;

	// code
	p = malloc(count * size);
	memset(p, 0, (count * size));

	return(p);
}
