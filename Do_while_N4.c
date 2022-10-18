//print bellow pattern by using nested do while loop   1
													                             2 2
													                             3 3 3
													                             4 4 4 4
													                             5 5 5 5 5
													
#include<stdio.h>
int main()
{
	//local variable
	int i = 1, j;

	do {
		j = 1;
		do {
			printf("%d", i);
			j++;

		} while (j <= i);
		i++;
		printf("\n");
	} while (i <= 5);
	return(0);
}
Footer
