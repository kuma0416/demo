#include <stdio.h>
int main(){
    int num=0;
    int a[100] = {0};
    scanf("%d", &num);
    for(int i=0;i<num;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<num;i++){
        printf("%3d", a[num-i-1]);
    }
}