#include <stdio.h>

int main(){
    int a[10];
    int temp;
    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    for(int i=9;i>=0;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                /*temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;*/
                //swap without using temp
                a[j] = a[j] ^ a[j+1];
                a[j+1] = a[j] ^ a[j+1];
                a[j] = a[j] ^ a[j+1];
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\n", a[i]);
    }
}