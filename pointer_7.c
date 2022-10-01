#include<stdio.h>
int main()
{
  //local variable declaration
  int arr[3] = {1,2,3};
  //code
  printf("\n\n using brackets");
  printf("\nAddress of arr[0]: %d", arr[0]);  //100
  printf("\nAddress of arr[1]: %d", arr[1]);  //101
  printf("\nAddress of arr[2]: %d", arr[2]);  //102

  printf("\n\n using pointer");
  printf("\nAddress of *arr: %d", arr[0]);  
  printf("\nAddress of *(arr+1): %d", *(arr+1));  
  printf("\nAddress of *(arr+2): %d", *(arr+2));  


  return(0);
}


output  Address of arr[0]: 1            using pointer value of *(arr):1
        Address of arr[1] : 2                         value of *(arr):2
        Address of arr[2]: 3                           value of *(arr):3
