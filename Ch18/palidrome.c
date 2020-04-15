#include <stdio.h>
#include <string.h>
#include "stack.h"

int main(void){
    char string[128];
    Stack stack;
    int i, half, length;
    scanf("%s", string);
    length = strlen(string);
    half = length / 2;
    init_stack(&stack);
    for(i=0;i<half;i++){
        push_stack(&stack, string[i]);
    }
    for(i=length-half;i<length;i++){
        if(string[i]!=pop_stack(&stack)){
            printf("not palidrome\n");
            return 0;
        }
    }
    printf("palidrome\n");
    return 0;
}