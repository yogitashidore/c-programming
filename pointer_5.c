#include<stdio.h>
int main()
{
  //local variable declaration
  int n1, n2;
  //function declaration
  void swap(int*, int*);
  //local variable declaration
  //int n1, n2;
  //code
  n1 = 10;
  n2 = 20;
  //printf("\nBefore swapping: ");
  printf("\nValue of n1 = %d", n1);
  printf("\nValue of n2 = %d", n2);
  //function call
  swap(&n1, &n2); //swap(100, 200)
  printf("\n\nAfter swapping: ");
  printf("\nvalue of n1 = %d", n1);
  printf("\nvalue of n2 = %d", n2);
  return(0);
}
void swap(int*p1, int*p2)
{
  //local variable
  int n3;
  //code
  n3 = *p1;
  *p1 = *p2;
  *p2 = n3;
}


//ootput 
    value of n1 = 10
    value of n2 = 20
    swapping
    n1 = 20
    n2 = 10
