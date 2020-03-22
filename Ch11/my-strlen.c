#include <stdio.h>

int my_strlen(char *string);

int main(){
    char string[80] = "programming";
    int length = 0;
    length = my_strlen(string);
    printf("string length is:%d", length);
}

int my_strlen(char *string){
    int count = 0;
    while(*string != '\0'){
        count++;
        string += 1;
    }
    return count;
}