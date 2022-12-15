#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (i % 5 == 0)
			break;

		printf("\ni =5%d", i);
	}
	printf("\n last line of the program");
	return(0);
}
