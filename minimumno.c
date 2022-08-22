//Author : Yogita shidore
//Date : 22/08/2022
//Accept two numbers from users & print minimum number

//input :

//include std input output file
#include<stdio.h>

//entry point function
int main()
{
  int a, b;
  printf("enter the value of a:");
  scanf("%d", &a);
  
  printf("enter the value of b:");
  scanf("%d", &b);
  if(a<b)
  {
     printf("Ais less than B");
  }
   else
    {
       printf("Bis less than A");
    }

   return(0); //returning value -successful
}
