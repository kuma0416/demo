#include <stdio.h>
#include <string.h>

int main(){
    char zodiac[12][40];
    char *zptr[12];
    char *temp;

    for(int i=0;i<12;i++){
        scanf("%s", &zodiac[i]);
        zptr[i] = zodiac[i];
    }

    for(int i=10;i>=1;i--){
        for(int j=0;j<=i;j++){
            if(strcmp(zptr[j], zptr[j+1]) > 0){
                temp = zptr[j];
                zptr[j] = zptr[j+1];
                zptr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<12;i++){
        printf("%s\n", zptr[i]);
    }

}