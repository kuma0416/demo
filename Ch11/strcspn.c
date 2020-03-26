#include <stdio.h>
#include <string.h>

int main(void){
    char letters[] = "abcdefghijklmnopqrstuvwxyz_.";
    char pathname[40], file[40][40];
    int file_count = 0;
    char *start = pathname;
    int i, skip_length, copy_length;

    scanf("%s", pathname);
    skip_length = strcspn(start, letters);
    while(skip_length < strlen(start)){
        start += skip_length;
        copy_length = strspn(start, letters);
        strncpy(file[file_count], start, copy_length);
        file[file_count][copy_length] = '\0';
        file_count += 1;
        start += copy_length;
        skip_length = strcspn(start, letters);
    }
    for(i=0;i<file_count;i++){
        printf("%s\n", file[i]);
    }
}