//Athor : Yogita shidore
//Date : 22/08/2022
//write a c program print table of 5 using for loop.

//input :

//include std input output file
#include<stdio.h>

//entry point function
int main()
{
  int i;
  for(i = 5; i <= 50; i = i + 5)
  {
    printf("\n%d",i);
  }

   return(0); //returning value -successful
}


//output :  
  5
  10
  15
  20
  25
  30
  35
  40
  45
  50
