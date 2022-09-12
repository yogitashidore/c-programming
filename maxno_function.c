//write a program to print maximum number betyween two numbers using function?
//Date: 12/9/2022
//Yogita shidore

#include <stdio.h>
int max(int no1, int no2);
int main() {
    int no1, no2, maximum;
    printf("enter any two numbers: ");
    scanf("%d%d", &no1, &no2);
    
    maximum = max(no1,no2);
    
   printf("\n maximum = %d\n", maximum);
   if(no1>no2)
   {
       printf("n01 is greater than no2");
   }
   else
   {
       printf("no2 is greater than no1");
   }
    return 0;
}
   int max(int no1, int no2)
{
    return(no1>no2); 
}
