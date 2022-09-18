//write a program to print minimum number between two numbers using function?
//Date : 18/9/2022
//Author : Yogita shidore

#include<stdio.h>
int main()
{
  //local variable declaration
  int no1 = 30;
  int no2 = 50;
  int minimum;
  ///function declaration
  int minimum(int no1, int no2);
  //code
  minimum = minimum(no1, no2);

  return(0);
}
int minimum(int no1, int no2)
{
  int minimum;
  if(no1<no2)
  {
     printf("no1 is less than no2");
  }
  else
  {
    printf("no2 is less than no1");
  }
  return(minimum);
}
