#include<stdio.h>
void main (void)
{
	
	int n=0;
	int i=0;
	double c=6.0;
	
	while(i!=6)
	{
		n=c;
		for(i=0; i<6; )
		{
			n=n-1;
			if(n%5==0)
			{
				n=n- (n/5);
				i=i+1;
			}
			else
			{
				c++;
				break;
			}

		}
		
	}
	printf("%lf",c);
}
