#include <stdio.h>
#include <assert.h>

void dump_file(char *filename, char *mode);

int main(void){
    FILE *fp;
    int a[10], b[10];

    for(int i=0;i<10;i++){//remember to assign index to array a
        a[i] = i;
    }

    fp = fopen("file", "wb");
    assert(fp != NULL);
    fwrite(a, sizeof(int), 10, fp);
    fclose(fp);

    fp = fopen("file", "rb");//here is rb not wb
    assert(fp != NULL);
    fread(b, sizeof(int), 10, fp);
    fclose(fp);

    for(int i=0;i<10;i++){
        printf("%d\n", b[i]);
    }
    dump_file("file", "rb");
    return 0;
}

void dump_file(char *filename, char *mode){
    FILE *fp;
    char c;
    int count=0;
    fp = fopen(filename, mode);
    assert(fp!=NULL);
    while((c = fgetc(fp))!=EOF){
        count++;
        printf("%02x ", c);
        if(count % 16 == 0){
            putchar('\n');
        }
    }
    fclose(fp);//do not forget this
    printf("\nthere are %d bits in %s\n", count, filename);
    return;
}