#include <stdio.h>
int main(){
    int i, j, k;
    scanf("%d", &i);
    scanf("%d", &j);
    scanf("%d", &k);
    if(i>j && i>k){
        printf("%d", i);
    } else if (j>i && j >k){
        printf("%d", j);
    } else {
        printf("%d", k);
    }
}