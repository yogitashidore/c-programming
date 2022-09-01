//Author : Yogita shidore
//Date :1/09/2022
//Write a program for nested loop
  print 
        00 
        10  11 
        20  21  22 
        30  31  32  33

//input :

//include std input output file
#include<stdio.h>
//entry point function
	 int main()
 {
    int col;
    int row;
    for(row=0; row<4; row++)
    {
      for(col=0; col<4; col++ )
      {
        if(row>=col)
        {
           printf("%d\t",  row,col)
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
