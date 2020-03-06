#include <stdio.h>

int main(){
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int *iptr1 = &(array[3]);
    int *iptr2 = iptr1 + 4;
    printf("iptr1 = %p, iptr2 = %p, *iptr = %d\n", iptr1, iptr2, *iptr2);
    printf("iptr2 - iptr1 = %d.", iptr2-iptr1);
}