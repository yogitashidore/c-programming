//Dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>
int main()
{
	//local variable
	int* p = NULL;
	int num = 0;

	//code
	printf("enter value:");
	scanf("%d", &num);

	p = malloc(10 * sizeof(int));  //allocate memory on heap

	if (p == NULL)
	{
		printf("memory allocation failed");
		exit(1);
	}
	  //write
	for (int i = 0; i < 10; i++)
	{
		p[i] = (i + 1) * num;
	}
	 //read
	for (int i = 0; i < 10; i++)
	{
		printf("\n%d", p[i]);
	}
	//free memory
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
	return(0);
  }

