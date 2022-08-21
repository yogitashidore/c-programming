//print msg on terminal
//Assignment : 3
//Date : 15/08/2022
//Write a program for subtraction of two numbers

//input :

//include std input output file
#include<stdio.h> 
int main()
{
   int a, b,sub;
   printf("/nEnter the value of a:");  //print msg on terminal
   scanf("%d", &a);
   printf("/nEnter the value of b:");
   scanf("%d",&b);
   sub=a-b;
   printf("/nSubtraction of a & b is : % d", sub);
   return(0);  //returning responce - successful
   }
