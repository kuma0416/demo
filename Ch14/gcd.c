#include <stdio.h>

int gcd(int i, int j);

int main(void){
    int m, n;
    scanf("%d%d", &m, &n);//& do not forget
    printf("the gcd of %d and %d is %d", m, n, gcd(m, n));
    return 0;
}

int gcd(int i, int j){
    int k = i % j;
    if(k==0){
        return j;
    } else {
        return gcd(j, k);
    }
}