//Write a c program on structure.
//Date : 20/9/2022
 //Author : Yogita shidore

#include<stdio.h>
int main()
{
   //local variable declaration
   struct_point point;

  //code
  printf("\nenter value of point.x = ");
  scanf("%d", &point.x);

  printf("\nenter value of point.y = ");
  scanf("%d", &point.y);

  if(point.x>0 && point.y>0)
  {
    printf("\nposition of x:%d and y:%d is on 1 qudrant", point.x,point.y);
  }
  elseif(point.x<0 && point.y>0)
  {
    printf("\nposition of x:%d and y:%d is on 2 qudrant", point.x,point.y);
  }
  elseif(point.x<0 && point.y<0)
  {
    printf("\nposition of x:%d and y:%d is on 3 qudrant", point.x,point.y);
  }
  elseif(point.x>0 && point.y<0)
  {
    printf("\nposition of x:%d and y:%d is on 4 qudrant", point.x,point.y);
  }
  elseif(point.x == 0 && (point.y<0 || point.y>0))
  {
    printf("\nposition of x:%d and y:%d is on x coordinate line", point.x,point.y);
  }
  elseif(point.y == 0 && (point.x<0 || point.x>0))
  {  
     printf("\nposition of x:%d and y:%d is on y coordinate line", point.x,point.y);
  }
  else
  {    
    printf("\nposition of x:%d and y:%d is on x origin", point.x,point.y); 
  }
  return(0);

}
