#include <stdio.h>
#include <string.h>

int main(){

	char c = 13;
	printf("%d << 1:%d\n", c, c<<1);
	printf("%d >> 1:%d\n", c, c>>1);
	
	c = -13;
	printf("%d << 1:%d\n", c, c<<1);
	printf("%d >> 1:%d", c, c>>1);
	
}
