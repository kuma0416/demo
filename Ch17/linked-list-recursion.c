#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef struct listnode{
	int data;
	struct listnode *next;
} Listnode;

void print_linked_list(Listnode *head){
	if(head == NULL){
		printf("\n");
		return;
	}
	printf("data = %d\n", head->data);
	print_linked_list(head->next);
}

Listnode *insert_linked_list(Listnode *head, int data){
	Listnode *current = (Listnode *)malloc(sizeof(Listnode));
	assert(current!=NULL);
	current->data = data;
	if(head==NULL || data < head->data){
		current->next = head;
		return current;
	}
	head->next = insert_linked_list(head->next, data);
	return head;
}

Listnode *delete_linked_list(Listnode *head, int data){
	if(head==NULL){
		return NULL;
	}
	if(head->data == data){
		Listnode *temp;
		temp = head->next;
		free(head);
		return temp;
	}
	head->next = delete_linked_list(head->next, data);
	return head;
}

int main(void){
	int i;
	int insert_array[5], delete_array[3];
	Listnode *head = NULL;
	
	for(i=0;i<5;i++)
		scanf("%d", &insert_array[i]);
	for(i=0;i<3;i++)
		scanf("%d", &delete_array[i]);
	for(i=0;i<5;i++)
		head = insert_linked_list(head, insert_array[i]);
	print_linked_list(head);
	for(i=0;i<3;i++)
		head = delete_linked_list(head, delete_array[i]);
	print_linked_list(head);
	return 0;
}