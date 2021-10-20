#include <stdio.h>
#include <string.h>

void main (void){
	FILE *var;
	var = fopen("Files.txt", "a");
	
	char in[100];
	printf("Enter your data to be stored ");
	gets(in);
	printf("\n");
	
	int i;
	for(i=0; i<strlen(in); i++){
		putc(in[i], var);
	}
	fclose(var);
	
	var = fopen("Files.txt", "r");
	char c;
	do{
		c = getc(var);
		printf("%c", c);
	}while(c!= EOF);
	
	fclose (var);
}
