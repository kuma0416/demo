#include <stdio.h>
#include <stdlib.h>

#define assert(cond) \
if (!(cond)){ \
    printf("Assertion failed :%s, file %s, line %d", #cond, __FILE__, __LINE__);\
}

int main(void){
    int i=0;
    assert(i==1);
    return 0;
}