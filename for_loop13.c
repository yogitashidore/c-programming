//Author : Yogita shidore
//Date : 18/08/2022
//write a c program print table of 3 using for loop.

//input
//include std input output file
#include<stdio.h>

int main()
{
   //local variable declaration
   int i;
   for (i = 3; i <= 30; i = i + 3)
   {
      printf("\n%d", i);
      
   }
   return(0); //returning value - successful
}


//output :  
   3
   6
   9
   12
   15
   18
   21
   24
   27
   30
