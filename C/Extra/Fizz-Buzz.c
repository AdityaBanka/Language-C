#include<stdio.h>
void main (void)
{
	int n,i;
	printf("Enter upper limit for Fizz-Buzz \n", n);
	scanf("%d", &n);
	for(i =1; i<=n; i++)
	{
		printf("\n");
		if(i%15==0)
		{
			printf("Fizz-Buzz");			
			continue;
		}

		else if (i%3==0)
			printf("Fizz");
		else if(i%5==0)
			printf("Buzz");
		else 
			printf("%d",i);	
	}
}
