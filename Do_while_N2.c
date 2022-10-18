//print bellow pattern by using nested do while loop    * * * * *
													                             	* * * *
								                                        * * *
														                            * *
													                            	*         
#include<stdio.h>
int main()
{   
	//local variable
	int i = 1, j;
	//code
	do
	{
		j = 1;
		do
		{
			if (i <= j)
			{
				printf("*");
			}
			j++;
		} while (j <= 5);
		i++;
		printf("\n");
	} while (i <= 5);
	return(0);
}
Footer
