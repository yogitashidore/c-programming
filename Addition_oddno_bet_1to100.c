
//Author : Yogita shidore
//Date : 21/08/2022
//print addition of all odd numbers between 1 to 100          
       
//input
//include std input output file
#include<stdio.h>

int main()
{
   int i,sum;
   for (i = 1; i <= 100; i = i+1)
   {
    
     sum=sum+i;
     printf("%d", i);
 }
    printf("\naddition of all odd numbers between 1 to 100 = %d",sum);
   return(0); //returning value - successful
}
