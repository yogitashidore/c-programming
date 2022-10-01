#include<stdio.h>
int main()
{
   int n1, n2, n3;

   //code
   n1 = 10;
   n2 = 20;
   printf("\nbefore swapping: ");
   printf("\n value of n1 = %d", n1);
   printf("\n address of n2 = %d", n2);

   n3 = n1;
   n1 = n2; 
   n2 = n3;
   
    printf("\nAfter swapping: "); 
    printf("\nvalue of n1 = %d", n1);
    printf("\nvalue of n2 = %d", n2);
   return(0);
}


//output = before swapping 
           n1 = 10
           n2 = 20
           after swapping
           n1 = 20
           n2 = 10
