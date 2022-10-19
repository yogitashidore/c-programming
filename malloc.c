#include<stdio.h>
#include<stdlib.h>
int main()
{
	//code
	int* p = NULL;
	p = (int*)calloc(5 , sizeof(int));

	for (int i = 0; i < 5; i++)
	{
		printf("\np[%d]=%d", i, p[i]);
	}
	free(p);
	return(0);

}
void* Mycalloc(unsigned int count, unsigned int size)
{
	void* p = malloc(count * size);
	memset(p, 0, (count * size));
	return p;
}
