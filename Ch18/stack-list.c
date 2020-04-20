#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "stack-list.h"
void init_stack(Stack *s){
    s->top = NULL;
}
int stack_full(Stack *s){
    return 0;
}

int stack_empty(Stack *s){
    return (s->top == NULL);
}

void push_stack(Stack *s, char data){
    Listnode *current;
    current = (Listnode *)malloc(sizeof(Listnode));
    assert(current!=NULL);
    current->data = data;
    current->next = s->top;
    s->top = current;
}

char pop_stack(Stack *s){
    Listnode *current;
    char c;
    if(stack_empty(s)){
        printf("stack is empty.\n");
        return (-1);
    }
    current = s->top;
    s->top = current->next;
    c = current->data;
    free(current);
    return c;
}