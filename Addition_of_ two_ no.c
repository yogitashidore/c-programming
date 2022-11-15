//peogram name : print msg on terminal
//Assignment : 2
1. Wright a program for addition of two numbers.
Date : 15/08/2022

//input :

//include std input output file
#include<stdio.h>
//entry point function
int main()
{
   int a,b,add;
   printf("/nEnter the value of a:"); //print msg on terminal
   scanf("%d", &a);
   printf("/nEnter the value of b:");
   scanf("%d", &b);
   add = a+b;
   
   printf("/nAddition of a & b is: % d", add);
   return(0);  //returning responce - successful
}
