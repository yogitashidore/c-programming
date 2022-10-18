#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

int main()
{
	
	// Local Variale Declaration
	int* p = NULL;
	int* temp = NULL;
	int num = 0;

	// code
	printf("\n Enter Value:");
	scanf("%d", &num);

	// p = malloc(50 * sizeof(int)); // allocate memory in Heap section
	// p = calloc(50, sizeof(int));
	p = (int *) malloc(4 * sizeof(int));
	if (p == NULL)
	{
		printf("\nNot enough memory available to allocate, malloc() Failed, Hence exiting");
		exit(1);
	}

	// write
	for (int i = 0; i < 4; i++)
	{
		p[i] = (i + 1) * num;
	}

	temp = realloc(p, 6 * sizeof(int));
	
	if (temp == NULL)
	{
		printf("\n No more memory available to allocate");

		for (int i = 0; i < 4; i++)
		{
			printf("\n %d", p[i]);
		}
		
	}
	else
	{
		p = temp;

		p[4] = 25;
		p[5] = 30;

		// read
		for (int i = 0; i < 6; i++)
		{
			printf("\n %d", p[i]);
		}
	}

	// free the allocated memory from Heap
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}

	printf("\n completed successfully");

	return(0);
}
