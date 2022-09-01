//Author : Yogita shidore
//Date :1/09/2022
//Write a program for nested loop
  print 
        00 01 02 03
        01 11 12 13 
        02 21 22 23
        03 31 32 33

//input :

//include std input output file
#include<stdio.h>
//entry point function
	 int main()
 {
    int col=0;
    int row=0;
    for(row=0; row<4; row++)
    {
       for(col=0; col<4; col++)
       {
          printf("%d%d\t" row,col);
       }
          printf("\n");
    }
      printf("\n");
      return(0);
}
