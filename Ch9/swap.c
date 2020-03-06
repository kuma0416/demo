#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    printf("Before swap, &a:%p, *a:%d, a:%p, &b:%p, *b:%d, b:%p\n", &a, *a, a, &b, *b, b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap, &a:%p, *a:%d, a:%p, &b:%p, *b:%d, b:%p\n", &a, *a, a, &b, *b, b);
}

int main(){
    int i=0, j=0;
    scanf("%d %d", &i, &j);
    printf("i:%p, j:%p\n", &i, &j);
    swap(&i, &j);
    printf("%d, %d", i, j);
}