#include <stdio.h>



void main (void)
{
	int i,f;
	for (i=1; i<=10; i++)
	{
		int f = factorial(i);
		printf("factorial is :\t%d", f);
		printf("\n");
	}
}

int factorial (int i)
{
	int j,p=1;
	for(j=1; j<=i; j++)
	{
		p = p*j;
	}
	return (p);
}
