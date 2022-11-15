//Author : Yogita shidore
//Date : 21/08/2022
//print addition of all odd numbers between 1 to 10 for loop              
       
//input
//include std input output file
#include<stdio.h>

int main()
{
   int i,sum;
   for (i = 1; i <= 10; i = i+2)
   {
    
      sum=sum+i;
          printf("%d", i);
 }
 printf("\n addition of all odd numbers between 1to 10 =%d,sum");
   return(0); //returning value - successful
}
