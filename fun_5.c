//write a c program on function.

#include<stdio.h>
int main()
{
	//local variable declaration
	char msg1[] = "YOGITA";
	char msg2[] = "SHIDORE";

	//function declaration

	void displaymessage(char str[]);

	//code
	displaymessage(msg1);
	displaymessage(msg2);
	displaymessage("YOGITA NARAYAN SHIDORE");

	return(0);
}
void displaymessage(char str[])
{
	printf("\n%s", str);
 }
