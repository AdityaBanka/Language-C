#include<stdio.h>

//program to show the use and 
//syntax of [struct] in C language
//by printing sum of values and character

struct newdat{
	int alpha,beta,gamma;
	char a[3];
};

void main(void){
	//created new struct
	struct newdat v;
	
	//initializing values to int data
	v.alpha = 10;
	v.beta = 20;
	v.gamma = v.alpha + v.beta; //30 should be stored
	
	//initializing char array
	int i;
	for(i=0; i<3; i++){
		v.a[i] = v.gamma + i + 35; //A,B,C should be stored
	}
	
	//output of the following code
	printf("v.alpha = %d\n", v.alpha);
	printf("v.beta = %d\n", v.beta);
	printf("v.gamma = %d\n", v.gamma);
	
	for(i=0; i<3; i++){
		printf ("value of v.a[%d] = %c\n",i,v.a[i]);
	}
	printf("\n");
	//................................................................................//
	//................................................................................//
	struct newdat b;
	
	//initializing values to int data
	b.alpha = 4;
	b.beta = 11;
	b.gamma = b.alpha + b.beta; //15 should be stored
	
	//initializing char array
	for(i=0; i<3; i++){
		b.a[i] = b.gamma + i + 53; //D,E,F should be stored
	}
	
	//output of the following code
	printf("b.alpha = %d\n", b.alpha);
	printf("b.beta = %d\n", b.beta);
	printf("b.gamma = %d\n", b.gamma);
	
	for(i=0; i<3; i++){
		printf ("value of b.a[%d] = %c\n",i,b.a[i]);
	}
}
