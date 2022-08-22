//Author : Yogita shidore
//Date : 22/08/2022
//Break statement using while loop

//input :

//include std input output file
#include<stdio.h>

//entry point function
int main()
{
  int i=0;
  while(i<=10)
  {
    printf("\n%d",i);
    i++;
    if(i==6)
    {
       break;
    }
}

   return(0); //returning value -successful
}
