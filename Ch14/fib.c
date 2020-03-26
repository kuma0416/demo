#include <stdio.h>

int fib(int i);

int main(void){
    int n;
    scanf("%d", &n);
    printf("fib(%d) is:%d", n, fib(n));
    return 0;
}

int fib(int i){
    if(i==1 || i==0){
        return i;
    }
    return (fib(i-1) + fib(i-2));
}