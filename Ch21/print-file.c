#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[]){
    int i;
    FILE *fp;
    int c;
    for(i=1;i<argc;i++){
        printf("\n----------------------\n");
        printf("file = %s\n", argv[i]);
        fp = fopen(argv[i], "r");
        assert(fp != NULL);
        while((c=fgetc(fp))!=EOF)
            putchar(c);
    }
    return 0;
}