//print bellow pattern by using nested do while loop    * 
                                                        * *
	                                                * * *
			                                * * * *
					                * * * * *   
                                                        * * * * * *
#include<stdio.h>
 int main()
{
	int i = 1, j;
	do
	{
		j = 1;
		do
		{
			printf("*");
			j++;
		} while (j <= i);
		i++;
		printf("\n");
	} while (i <= 6);
	return(0);
 }
