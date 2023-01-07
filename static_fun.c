#include<stdio.h>
int main()
{
	void count();

	count();
	count();
	count();
	count();
	count();
	return(0);
}
void count()
{
	static int count = 0;
	count++;
	printf("\ncount = %d", count);
}



//output:  count:1
           count:2
           count:3
           count:4
           count:5
