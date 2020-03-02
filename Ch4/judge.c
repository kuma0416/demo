#include <stdio.h>
int main(){
    int i = 0;
    int k = 0;
    scanf("%d", &i);
    k = (i > 0) ? i : -i;
    printf("%d", k);
}