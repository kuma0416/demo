#include <stdio.h>

int main(){
    int i;
    int *iptr;
    iptr = &i;
    i = 0;
    printf("iptr:%p *iptr:%d &i:%p i:%d\n", iptr, *iptr, &i, i);
    i = 1;
    printf("iptr:%p *iptr:%d &i:%p i:%d\n", iptr, *iptr, &i, i);
    *iptr = 10;
    printf("iptr:%p *iptr:%d &i:%d i:%d", iptr, *iptr, &i, i);
}