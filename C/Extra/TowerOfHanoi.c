#include<stdio.h>

void hanoi (int n, char st, char in, char en)
{
	if (n==1)
	{
		printf ("Move 1 from %c to %c \n", st, en);
		return;	//Terinating condition
	}
	else
	{
		hanoi ( n-1, st, en, in);	//moves diskes above to intermidiate rod
		printf ("Move %d from %c to %c \n", n, st, en);	//moves lowest disk to final
		hanoi ( n-1, in, st, en);	//moves stack above to final
	}
}

void main (void)
{
	char st = 'A';
	char in = 'B';
	char en = 'C';
	int n = 3;
	//printf("%c %c %c\n", st, in, en);
	hanoi (n, st, in, en);
}

//Code by CoderBoiNeo
