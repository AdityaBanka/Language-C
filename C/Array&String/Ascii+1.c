#include<stdio.h>
#include<string.h>
void main (void)
{
	char a[50];
	//char c;
	int i,l,c;
	
	printf("Enter a sentance/word \n");
	gets(a);
	
	l = strlen(a);
	char b[strlen(a)];
	
	for(i=0; i<l; i++)
	{
		//c = a[i];
		//b[i] = (char)(c+1);
		b[i]= a[i]+1;
	}
	printf ("your output of string is :\t%s",b);
}
