#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef struct listnode{
	int data;
	struct listnode *next;
} Listnode;

void print_linked_list(Listnode *head){
	for(;head!=NULL;head = head->next)
		printf("data = %d\n", head->data);
}

Listnode *insert_linked_list(Listnode *head, int data){
	Listnode *current = (Listnode *)malloc(sizeof(Listnode));//remember malloc
	Listnode *ptr;
	Listnode *last;
	assert(current !=NULL);
	current->data = data;
	if(head == NULL){//插入第一個node
		current->next = NULL;//設定現在的node的下一個是NULL
		return current;
	}
	last = NULL;
	ptr = head;
	while(ptr != NULL && ptr->data < data){//尋找第一個比自己大的位置
		last = ptr;//找到的最後一個比自己小的
		ptr = ptr->next;//記憶位置
	}
	if(last == NULL){
		current->next = head;//因為沒有數比自己小所以直接把自己當head
		return(current);
	} else {
		current->next = last->next;//把last下一個位址也就是第一個比自己大的數的位址傳進來
		last->next = current;//把自己接到極限的地方連起來
		return head;
	}
}
/*第一次嘗試，current沒有用malloc給予新的記憶體空間 -> incorrect
Listnode *insert_linked_list(Listnode *head, int data){
    Listnode *ptr, *last;
    Listnode *current;
    current->data = data;
    if(head == NULL){
        head = current;
        return head;
    }
    last = NULL;
    ptr = head;
    while(ptr->next != NULL && ptr->data<data){
        last = ptr;
        ptr = ptr->next;
    }
    if(last == NULL){
        current->next = head;
        return current;
    } else {
        current->next = last->next;
        last->next = current;
        return head;
    }
}
*/
int main(void){
	int i;
	int array[5];
	Listnode *head = NULL;
	
	for(i=0;i<5;i++)
		scanf("%d", &array[i]);
	for(i=0;i<5;i++)
		head = insert_linked_list(head, array[i]);
	print_linked_list(head);
	return 0;
}