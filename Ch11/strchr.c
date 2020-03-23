#include <stdio.h>
#include <string.h>

int main(){
    char pathname[40];
    char file[40][40];
    int file_count = 0;
    char *start = pathname;
    char *slash;

    scanf("%s", &pathname);
    if(*start == '/'){
        start++;
        //slash = pathname; Initialize slash content, but can skip.
    }
    while(slash != NULL){
        slash = strchr(start, '/');
        if(slash == NULL){
            strcpy(file[file_count], start);
            file_count++;
            //start = NULL;//Textbook method, it use start as a condition in while loop.
        } else {
            strncpy(file[file_count], start, slash-start);
            file[file_count][slash-start] = '\0';//This is important, so u cannot forget this line.Or u will get a strange code in print result.
            start = slash + 1;
            file_count++;
        }
    }
    for(int i=0;i<file_count;i++){
        printf("%s\n", file[i]);
    }
}