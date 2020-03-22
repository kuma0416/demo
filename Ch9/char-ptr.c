#include <stdio.h>

int main(){
    char i[20];
    char *iptr;
    iptr = i;
    printf("iptr:%p *iptr:%d &i:%p i:%p\n", iptr, *iptr, &i, i);
}