#include <stdio.h>
#include <string.h>

int main(){

	int a = 8;
    int b;
    scanf("%d", &b);
    b = b & a;
    printf("a:%d, b:%d", a, b);
	
}
