//Use / to divide scan into three part and print the scan read digit.
//Should use the same format with scan format.
#include <stdio.h>

int main(){
    int i=0, j=0, k=0;
    int count =0;

    count = scanf("%d/%d/%d", &i, &j, &k);
    printf("i = %d, j = %d, k = %d\n%d items read by scanf\n", i, j, k, count);

    count = scanf("%d/%d/%d", &i, &j, &k);
    printf("i = %d, j = %d, k = %d\n%d items read by scanf\n", i, j, k, count);
}