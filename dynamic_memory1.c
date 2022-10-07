//Dynamic memory allocation
//Date: 6/10/2022
//Author: Yogita shidore

#include<stdio.h>
#include<stlib.h>
int main()
{
  //local variable declaration
  int*p = NULL;
  int num = 0;
  //code
  printf("\nenter value:");
  scanf("%d", &num);
  p = mallock(10* sizeof(int));  //allocate memory in heap section
  if(p == NULL)
  {
     printf("\nnot enough memory available to allocate, malloc() failed, hence existing");
     exist(1);
  }
  //write
  for(int i = 0; i<10; i++)
  {
    p[i] = (i+1)*num;
  }
  //read
  for(int i=0; i<10; i++)
  {
  printf("\n %d", *p(i));
  }
  //free the allocate memory from heap
  if(p! = NULL)
  {
    free(p);
    p = NULL;
  }
  return(0);
}
