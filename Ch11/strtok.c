#include <stdio.h>
#include <string.h>

int main(void){
    char delimeters[] = "/";
    char pathname[40];
    char file[40][40];
    int file_count = 0;
    char *start = pathname;
    int i;

    scanf("%s", pathname);
    start = strtok(pathname, delimeters);
    while(start != NULL){
        strcpy(file[file_count], start);
        file_count++;
        start = strtok(NULL, delimeters);
    }
    for(i=0;i<file_count;i++){
        printf("%s\n", file[i]);
    }
    printf("pathname is:%s", pathname);
}