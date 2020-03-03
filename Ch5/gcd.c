#include <stdio.h>

int main(){
    int i, j, k=0;
    scanf("%d", &i);
    scanf("%d", &j);
    /*while (i % j !=0)
    {
        k = i % j;
        i = j;
        j = k;
    }
    printf("%d", j);*/
    while(0 != (i%=j) && 0 != (j%=i));
    printf("%d", i+j);
    //reference from GCD function in c library
}