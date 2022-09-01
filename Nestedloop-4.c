//Author : Yogita shidore
//Date :1/09/2022
//Write a program for nested loop
  print 
    *
    * *
    * * *
    * * * *
    * * * * *

//input :

//include std input output file
#include<stdio.h>
//entry point function
	 int main()
     int col;
     int row;
{
       for(row=0; row<5; row++)
    {
      for(col=0; col<5; col++)
      {
      if(row>=col)
      {
       printf("*\t");
      }
      else
      {
      printf(" ");
      }
     }
     printf("\n");
     return(0);
   }
}
 
