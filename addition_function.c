//write a program to print addition of two number using function?

#include<stdio.h>
//function declaration
int addition(int no1, int no2);

int main()
{
   int no1 = 10;
   int no2 = 20;
   int result = addition(no1, no2); //function call
   printf("addition of two number is = %d",result);
   return(0);
}

//function defination
int addition(int no1, int no2)
{
   printf("inside function addition\n");
   return no1 + no2;
}
