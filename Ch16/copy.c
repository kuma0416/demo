#include <stdio.h>
#include <assert.h>

int main(void){
    FILE *fp1;
    FILE *fp2;
    int c;

    fp1 = fopen("file1", "w");
    assert(fp1 != NULL);
    for(int i=0;i<10;i++){
        fputc('a', fp1);
    }
    fclose(fp1);

    fp2 = fopen("file2", "w");
    assert(fp2 != NULL);
    for(int i=0;i<20;i++){
        fputc('b', fp2);
    }
    fclose(fp2);

    fp1 = fopen("file1", "r");
    assert(fp1 != NULL);
    fp2 = fopen("file2", "w");
    assert(fp2 != NULL);

    while((c = fgetc(fp1)) != EOF){
        printf("%d", c);
        fputc(c, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    fp2 = fopen("file2", "r");
    assert(fp2 != NULL);
    while((c = fgetc(fp2)) != EOF){
        printf("%c", c);
        fputc(c, stdout);
    }
    fclose(fp2);
    return 0;
}