#include<stdio.h>
int main()
{
   //local variable declaration
   int n = 10;
   int *p = NULL;
   //code
   n = 10;
   //Assign address of n to pointer p
   p = &n;
   //using n
   printf("\n value of n = %d", n);
   printf("\n address of n = %p", &n);

   //using p
    printf("\nAddress in p = %p", p); 
    printf("\nAddress in p = %p", &p);
    printf("\nAddress in p = %p", *p);
   return(0);
}


