#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define IN 1
#define OUT 0

int main()
{
  //function declaration
  int word_count(char*);

  //local variable declaration
  char*str = "pune\nuniversity";
  int wc = 0;

  wc = word_count(str);
  printf("\nword count = %d", wc);
  return(0);
}
int word_count(char*str)
{
  //local variable declaration
  int wc = 0;
  int state;
  int i;
  //code
  state = out;
  for(i = 0; i<strlen(str); i++)
  {
     if(state == OUT && !isspace(str[i]))
     {
        wc++;
        state = IN;
     }
      else if(state == IN && isspace(str[i]))
      {
        state = OUT;
      }  
  }
   return wc;
}
