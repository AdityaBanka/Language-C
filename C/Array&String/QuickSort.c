#include<stdio.h>
#include<stdlib.h>

void display(int a[], int n);
void quick(int a[], int l, int h);
int part(int a[], int l, int h);
void swap(int a[], int i, int j);

void main (void){
	//Initializing Length of Array
	int n;
	printf("Enter the length of the Array ");
	scanf("%d",&n);
	int a[n];
	
	//Initializing the content of the Array
	int i;
	for(i=0; i<n; i++){
		a[i] = rand()%100;
	}
	display(a, n);
	quick(a, 0, n);
	display(a, n);
}

//...............................................................

void display(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
	printf("\n");
}

//...............................................................

void quick(int a[], int l, int h){
	int j;
	printf("CHECK\n");
	if(l<h){
		j = part(a, l, h);
		quick(a, l, j);
		quick(a, j+1, h);
	}
}

//...............................................................

int part(int a[], int l, int h){
	int p = (l+h)/2;
	int i=l;
	int j=h;
	while(i<j){
		do{
			i++;
		}while(a[i]<=a[p]);
		do{
			j--;
		}while(a[j]>a[p]);
		if(i<j){
			swap(a, i, j);	
		}	
	}
	return(j);
}

//............................................................

void swap(int a[], int i, int j){
	a[i] = a[i] + a[j];
	a[j] = a[i] - a[j];
	a[i] = a[i] - a[j];
}






