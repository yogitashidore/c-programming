//Author : Yogita shidore
//Date :1/09/2022
//Write a program for nested loop
  print 
        11
		*  22
		*  *  33
		*  *  *  44

//input :

//include std input output file
#include<stdio.h>
//entry point function
	 int main()
 {
   int i;
   int j;
   for(i=1; j<5; i++)
   {
     for(j=1; j<=i; j++)
	 {
	   if(i==j)
	   {
	     printf("%d", i*10+j);
		 printf(" ");
	   }
	   else
	   {
	     printf("\n");
     }
	 }
	  printf("\n");
  }
}
   
