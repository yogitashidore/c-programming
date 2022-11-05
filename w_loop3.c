//Athor : Yogita shidore
//Date : 22/08/2022
//Do addition of all even number 1to10 while loop

//input :

//include std input output file
#include<stdio.h>

//entry point function
int main()
{
  int i=2;
  int sum = 0;
  while(i<=10)
  {
     printf("%d",i);
     i=i+2;
     sum=sum+1;
  }
  printf("addition of all even number from 1 to 10is %d",sum);
   return(0); //returning value -successful
}


//output:  2
           4
           6
           8
           10
          addition of all even number from 1 to 10 is:5
