#include<stdio.h>


void main(void)
{
	char a[]= "ADitya Banka Is GreaT";
	char b[strlen(a)];

	//sorting String a
	//using BUBBLE SORT
	
	int i,j;
	for (i=0; i<(strlen(a)-1); i++)
	{
		for (j=0; j<(strlen(a)-1); j++)
		{
			if(a[j]>a[j+1])
			{
				a[j] = a[j] + a[j+1];
				a[j+1] = a[j] - a[j+1];
				a[j] = a[j] - a[j+1];
			}

		}
	}
	j=0;
	for(i=0; i<strlen(a); i++)
	{
		if( a[i] != (char)32)
		{
			b[j] = a[i];
			j++;
		}		
	}
	
	//Finalizing the String so that only ONE instance of a letter is pesent
	//Using BINARY SEARCH
	
	char c[strlen(b)]
	j=0;
	int start=0, end= strlen(c)-1;
	while (start<=end)
	{
		mid = (start+end)/2;
		if(b[i]<=mid)
	}
	
}
