//Author : Yogita shidore
//Date : 31/08/2022
//program for printing below pattern Nested loop
   0 1 2 3 4 5
   0 1 2 3 4 5
   0 1 2 3 4 5 
   0 1 2 3 4 5
   0 1 2 3 4 5

//input

//include std input output file
#include<stdio.h>
//entry point function
int main()
{
   int i;
   int j;
   for(j=0; j<6; j++)
   {
   for(i=0; i<6; i++)
   {
   printf("%d\t", i);
   }
   printf("%d\n" j);
   }
   return(0);
}
