#include <stdio.h>
#include <assert.h>

int main(void){
    FILE *fp1;
    char string[128];
    fp1 = fopen("print-line.c", "r");
    assert(fp1 != NULL);
    while((fgets(string, 128, fp1))!=EOF){
        fputs(string, stdout);
    }
    fclose(fp1);
    return 0;
}