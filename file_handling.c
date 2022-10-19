#include<stduo.h>
//file handling
int main()
{
   //local variable declaration
   FILE*fp = NULL;
   fp = fopen("testfile.txt","a");
  if(fp == NULL)
  {
     printf("\nenable to open the file, hence exiting..");
     exit(1);
     }
      fprintf(fp,"\ntest data");
      fclose(fp);
      return(0);
      }
   
