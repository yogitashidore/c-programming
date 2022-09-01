//Author : Yogita shidore
//Date :1/09/2022
//Write a program for nested loop
  print 
        1
		1 2
		1 2 3
		1 2 3 4
		1 2 3 4 5

//input :

//include std input output file
#include<stdio.h>
//entry point function
	 int main()
 {
   int i, j,row;
   printf("\nhow many rows");
   scanf("%d", &row);
   for(i=1; i<=row; i++)
   {
     for(j=1; j<=i; j++)
	 {
	   printf("%d", j);
	 }
	 printf("\n");
	 }
	 return(0);
}
   
   
