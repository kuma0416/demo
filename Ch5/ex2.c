#include <stdio.h>
int main(){
    int i=0;
    scanf("%d", &i);
    for(int a=0;a<2*i-1;a++){
        if(a>=i)printf("%d\n", 2*i-1-a);else printf("%d\n", a+1);
    }
}