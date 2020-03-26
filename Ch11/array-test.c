#include <stdio.h>
#include <string.h>

int main(void){
    char a[2][3] = {'0'};
    for(int i=0;i<2;i++){
        strcpy(a[i], "string");
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("a[%d][%d]:%c\n", i, j, a[i][j]);
        }
    }
}