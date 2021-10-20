#include<stdio.h>
#include<stdlib.h>

struct dat{
	int number;
	struct dat *nextNode;
};

void main (void){
	
	struct dat *start = NULL;
	struct dat *node;
	struct dat *prev;
	
	int i;
	for(i=0; i<10; i++){
		node = (struct dat*) malloc(sizeof(struct dat));
		
		printf("Enter a number in the node ");
		scanf("%d", &node->number);
		
		if(start == NULL){
			start = node;
		}
		else{
			node->nextNode = NULL;
			prev->nextNode = node;
		}
		prev = node;
	}
	
	for(node=start; node!=NULL; node = node->nextNode){
		printf("%d\n", node->number);
		
	}
}
