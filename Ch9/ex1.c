#include <stdio.h>

int max(int *iptr[], int n);

int main(){
    int i;
    int array[10];
    int *iptr[10];

    for(i = 0;i<10;i++){
        scanf("%d", &array[i]);
        iptr[i] = &array[i];
    }

    printf("%d\n", max(iptr, 10));
    return 0;
}

int max(int *iptr[], int n){
    int maximum = *iptr[0];
    for(int j=1;j<n;j++){
        if(*iptr[j] > maximum) maximum = *iptr[j];
    }
    return maximum;
}