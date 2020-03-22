#include <stdio.h>
#include <string.h>

int main(){
    char str1[80] = "programming";
    char str2[] = "programming";
    char *ptr = "programming";
    printf("size of str1 is:%d, and string length is:%d\n", sizeof(str1), strlen(str1));
    printf("size of str2 is:%d, and string length is:%d\n", sizeof(str2), strlen(str2));
    printf("size of str3 is:%d, and string length is:%d", sizeof(ptr), strlen(ptr));
}