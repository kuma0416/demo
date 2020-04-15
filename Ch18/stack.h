typedef struct stack{
    int top;
    char elements[100];
} Stack;

void init_stack(Stack *s);
int stack_fulll(Stack *s);
int stack_empty(Stack *s);
void push_stack(Stack *s, char c);
int pop_stack(Stack *s);