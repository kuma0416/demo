#include <stdio.h>
#include <assert.h>

void dump_file(char *filename, char *mode);

int main(void){
    FILE *fp;

    fp = fopen("text", "wt");
    assert(fp != NULL);
    fputs("hello\n", fp);
    fclose(fp);

    fp = fopen("binary", "wb");
    assert(fp != NULL);
    fputs("hello\n", fp);
    fclose(fp);

    dump_file("binary", "rb");
    dump_file("text", "rb");//用t寫可是用b讀會有\r跑出來(如果是用windows環境編譯)
    dump_file("text", "rt");
}

void dump_file(char *filename, char *mode){
    FILE *fpx;
    int c;
    int count = 0;

    fpx = fopen(filename, mode);
    assert(fpx!=NULL);
    while ((c = fgetc(fpx))!=EOF)
    {
        count++;
        printf("%02x ", c);
    }
    printf("\nThere are %d bytes in file %s\n", count, filename);
}