#include <stdio.h>
#include "ex1.h"

#define N 128

int main(void){
    int n=0;
    int r, g, b;
    Color c[N];
    Color average;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d", &r, &g, &b);
        initColor(&c[i], r, g, b);
        printColor(&c[i]);
    }
    average = averageColor(c, n);
    printColor(&average);
    return 0;
}