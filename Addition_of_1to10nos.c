
//Author : Yogita shidore
//Date : 18/08/2022
//print Addition of 1to10 numbers               
       
//input
//include std input output file
include<stdio.h>

int main()
{
   
   int sum = 0;
   for (i = 0; i <= 10; i = i++)
   {
      printf("%d",i);
      sum = sum+i;
   }
   printf("addition of 1to10 numbers %d",sum);
   return(0); //returning value - successful
}
