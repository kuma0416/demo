#include <stdio.h>

int main(){
    float x;//use double can be more accurate
    float e=1.0;//use double can be more accurate
    int n=10;
    int denominator = 1;
    float molecule = 1.0;

    scanf("%f", &x);
    for(int i=1;i<=n;i++){
        denominator *= i;
        molecule *= x;
        e += molecule/denominator;
    }
    printf("%f", e);
}