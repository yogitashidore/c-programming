#include<stdio.h>
//Global variable 
int n1, n2;
int main()
{
   //function declaration
    void swap()
   //code
   n1 = 10;
   n2 = 20;
   printf("\nbefore swapping: ");
   printf("\n value of n1 = %d", n1);
   printf("\n address of n2 = %d", n2);
   
   //function call
   swap();
    printf("\nAfter swapping : "); 
    printf("\nvalue of n1 = %d", n1);
    printf("\nvalue of n2 = %d", n2);
   return(0);
}
void swap()
{
  //local variable
  int n3;
  //code
  n3 = n1; 
  n1 = n2;
  n2 = n3;
}

//output 
before n1 = 10
       n2 = 20
  after n1 = 20
        n2 = 10
