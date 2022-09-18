//write a program to print maximum number betyween two numbers using function?
//Date: 12/9/2022
//Yogita shidore

#include<stdio.h>
int main()
{
    //local variable declaration
    int no1 = 50;
    int no2 = 30;
    int maximum;
    //function declaration
    int maximum(int no1, int no2);
    //code
    maximum = maximum(no1, no2);
    printf("\n%d", maximum");
    
    return(0);
}
int maximum(int no1, int no2)
{
   int maximum;
    if(no1>no2)
    {
       printf("no1 is greater than no2");  
    }
    else
    {
        printf("no2 is greater than no1");
    }
    return(maximum);
}
    
