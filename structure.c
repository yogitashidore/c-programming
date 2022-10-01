//Write a c program on structure.
//Date : 20/9/2022
 //Author : Yogita shidore

#include<stdio.h>
int main()
{
  int point_x;
  int point_y;

  //code
  printf("\nenter value of point_x = ");
  scanf("%d", &point_x);

  printf("\nenter value of point_y = ");
  scanf("%d", &point-y);

  if(point_x>0 && point_y>0)
  {
    printf("\nposition of x:%d and y:%d is on 1 qudrant", point_x,point_y);
  }
  elseif(point_x<0 && point_y>0)
  {
    printf("\nposition of x:%d and y:%d is on 2 qudrant", point_x,point_y);
  }
  elseif(point_x<0 && point_y<0)
  {
    printf("\nposition of x:%d and y:%d is on 3 qudrant", point_x,point_y);
  }
  elseif(point_x>0 && point_y<0)
  {
    printf("\nposition of x:%d and y:%d is on 4 qudrant", point_x,point_y);
  }
  elseif(point_x == 0 && (point_y<0 || point_y>0))
  {
    printf("\nposition of x:%d and y:%d is on x coordinate line", point_x,point_y);
  }
  elseif(point_y == 0 && (point_x<0 || point_x>0))
  {  
     printf("\nposition of x:%d and y:%d is on y coordinate line", point_x,point_y);
  }
  else
  {    
    printf("\nposition of x:%d and y:%d is on x origin", point_x,point_y); 
  }
  return(0);

}
