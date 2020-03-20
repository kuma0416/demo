#include <stdio.h>

int main(){
    char c;
    int i, j;
    printf("0123456789abcdef\n");
    for(int i=2;i<=7;i++){
        for(int j = 0;j<=15;j++){
            c = i*16+j;
            printf("%c", c);
        }
        printf("\n");
    }
}