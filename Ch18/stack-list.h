typedef struct listnode{
    char data;
    struct listnode *next;
} Listnode;

typedef struct stack{
    Listnode *top;
} Stack;

void init_stack(Stack *s);
int stack_fulll(Stack *s);
int stack_empty(Stack *s);
void push_stack(Stack *s, char data);
char pop_stack(Stack *s);