#include <stdio.h>

int main(){
    char c;
    int i;
    scanf("%d", &i);
    c = i;
    c++;
    i++;
    printf("c = %d\n", c);//char c include -128~127, so very easy overflow.
    printf("i = %d\n", i);//just input 127, c=-128 but i=128.
}