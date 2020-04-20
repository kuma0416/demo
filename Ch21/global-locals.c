#include <stdio.h>

int i;

void foo(void){
    i++;
    printf("foo: %d\n", i);
}

int main(void){
    int i = 10;
    foo();
    if (i==10){
        int i = 20;
        printf("if: %d\n", i++);
    }
    printf("main: %d", i);
    return 0;
}