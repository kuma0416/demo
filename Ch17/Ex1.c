#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct listnode{
	int data;
	struct listnode *next;
} Listnode;

void printback_linked_list(Listnode *ptr);
void print_list(Listnode *ptr);

int main(void){
	int data;
	Listnode *head;
	Listnode *previous = NULL;
	while(scanf("%d", &data)!=EOF){
		head = (Listnode *)malloc(sizeof(Listnode));
		assert(head!=NULL);
		head->data = data;
		head->next = previous;
		previous = head;
	}
	//print_list(head);
	printback_linked_list(head);
}

void print_list(Listnode *ptr){
	while(ptr!=NULL){
		printf("data = %d\n", ptr->data);
		ptr = ptr->next;
	}
}

void printback_linked_list(Listnode *ptr){
	Listnode *previous, *current, *nextward;
	previous = ptr;
	current = previous->next;
	nextward = current->next;
	while(current!=NULL){
		if(previous == ptr){
			previous->next = NULL;
		}
		current->next = previous;
		previous = current;
		current = nextward;
		if(current != NULL)
			nextward = current->next;
	}
	print_list(previous);
}
