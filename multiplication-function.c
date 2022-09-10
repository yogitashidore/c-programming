//Write a program to print multiplication of two number using function?

#include<stdio.h>
//function declaration
int multiplication(int no1, int no2);

int main()
{
   int no1 = 10;
   int no2 = 20;
   int result = multiplication(no1, no2); //function call
   printf("multiplication of two number is = %d",result);
   return(0);
}

//function defination
int multiplication(int no1, int no2)
{
   printf("inside function multiplication\n");
   return no1 * no2;
}
