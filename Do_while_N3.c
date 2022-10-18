//print bellow pattern by using nested do while loop 11
													                           21 22
													                           31 32 33
													                           41 42 43 44
													                           51 52 53 54 55
													
#include<stdio.h>
int main()
{
	//local variable
	int i = 1, j;

	do {
		j = 1;
		do {
			printf("%d%d", i, j);
			j++;

		} while (j <= i);
		i++;
		printf("\n");
	} while (i <= 5);
	return(0);
}
