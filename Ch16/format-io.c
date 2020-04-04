#include <stdio.h>
#include <assert.h>

int main(void){
    FILE *fp1;
    int sum = 0;
    int temp;

    fp1 = fopen("file1", "w");
    assert(fp1 != NULL);
    for(int i=0;i<10;i++){
        fprintf(fp1, "%d\n", i);//\n要記得加，不然會有問題
    }
    fclose(fp1);

    fp1 = fopen("file1", "r");
    assert(fp1 != NULL);
    while((fscanf(fp1, "%d", &temp)) != EOF){
        sum += temp;
    }
    fclose(fp1);
    printf("%d", sum);
}