//write a program using calloc.

#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

int main()
{
	//function declaration
	void* mycalloc(int, int);

	//local variable
	int* p = NULL;
	int num = 0;

	//code
	printf("\nenter value:");
	scanf("%d", num);

	p = (int*)mycalloc(10, sizeof(int));

	if (p == NULL)
	{
		printf("\n failed");
		exit(1);
	}
	printf("\n size of p=%d", 10 * sizeof(int));
	//write
	for (int i = 0; i < 10; i++)
	{
		p[i] = (i + 1) * num;
	}
	//read
	for (int i = 0; i < 10; i++)
	{
		printf("\n %d", p[i]);

	}
	if (p != NULL)
	{
		free(P);
		p = NULL;
	}
	return(0);
}
void* mycalloc(int count, int size)
{
	void* p = NULL;
	//code
	p = malloc(count * size);
	memset(p, 0, (count * size));
	return(p);
}
