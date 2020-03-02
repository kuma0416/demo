#include <stdio.h>
int main(){
    int i = 0;
    scanf("%d", &i);
    if(i % 3 == 0 && i % 5 != 0){
        printf("%d", 1);
    } else if (i % 5 == 0 && i % 3 !=0){
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }
}