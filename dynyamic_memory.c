//Dynamic memory allocation
//Date: 6/10/2022
//Author: Yogita shidore

#include<stdio.h>
#include<stlib.h>
int main()
{
  //local variable declaration
  int*p = NULL;
  //code
  p = mallock(sizeof(int));  //allocate memory in heap section
  if(p == NULL)
  {
     printf("\nnot enough memory available to allocate, malloc() failed, hence existing");
     exist(1);
  }
  //weite
  *p = 10;
  //read
  printf("\nvalue = %d", *p);
  //free the allocate memory from heap
  ifp! = NULL)
  {
    free(p);
    p = NULL;
  }
  return(0);
}
