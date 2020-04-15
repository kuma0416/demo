#include <stdio.h>
#include "stack.h"

int main(void){
    char string[128];
    Stack stack;
    int balanced = 1;
    int i;
    scanf("%s", string);
    init_stack(&stack);
    for(i=0;string[i]!='\0' && balanced;i++){
        switch (string[i])
        {
        case '(': case '[': case'{':
            push_stack(&stack, string[i]);
            break;
        case ')':
            if(pop_stack(&stack) != '(')
                balanced = 0;
            break;
        case ']':
            if(pop_stack(&stack) != '[')
                balanced = 0;
            break;
        case '}':
            if(pop_stack(&stack) != '{')
                balanced = 0;
            break;
        default:
            balanced = 0;
        }
    }
    if(!stack_empty(&stack) || balanced == 0)
        printf("not balanced\n");
    else
        printf("balanced\n");    
}