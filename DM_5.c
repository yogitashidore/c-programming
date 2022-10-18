#include<stdio.h>

struct Emp
{
	int iData;
	float fData;
};

int main()
{
	// local variable declarations
	struct Emp emp;

	struct Emp* p_emp = NULL;
	p_emp = &emp;

	//
	emp.iData = 10;
	emp.fData = 1.5f;

	// using pointer
	(*p_emp).iData = 10;
	(*p_emp).fData = 10.1f;

	p_emp->iData = 10;
	p_emp->fData = 10.1f;

	// print
	printf("\n p_emp->iData = %d", p_emp->iData);
	printf("\n p_emp->fData = %.1f", p_emp->fData);

	return(0);
}
