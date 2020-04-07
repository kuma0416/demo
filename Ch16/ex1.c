#include <stdio.h>
#include <assert.h>

int main(void){
    char filename1[80], filename2[80];
    FILE *fp1, *fp2;
    char a, b;
    int count=0;
    int offset=0;
    scanf("%s", &filename1);
    scanf("%s", &filename2);
    fp1 = fopen(filename1, "rb");
    fp2 = fopen(filename2, "rb");
    assert(fp1!=NULL);
    assert(fp2!=NULL);
    
    while((a = fgetc(fp1))!=EOF && (b = fgetc(fp2))!=EOF){
        if(a!=b){
            printf("%d\n", offset);
            offset++;
        } else {
            offset++;
        }
    }
    if(a==EOF){
        printf("%s ", filename2);
        while((b=fgetc(fp2))!=EOF){
            count++;
        }
        printf("%d", count);
    } else if(b==EOF){
        printf("%s ", filename1);
        while((a=fgetc(fp1))!=EOF){
            count++;
        }
        printf("%d", count);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}