#include <stdio.h>

int main(){
    int year = 0;
    int k = 0;
    scanf("%d", &year);
    k = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    printf("%d", k);
}