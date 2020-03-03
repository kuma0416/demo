#include <stdio.h>
int main(){
    int i=0, j=0, k=1;
    scanf("%d", &i);
    scanf("%d", &j);
    for(int a=0;a<j;a++){
        k = k * i;
        printf("in %d times, i's index is:%d\n", a, k);
    }
    printf("%d", k);
}