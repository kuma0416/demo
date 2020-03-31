#include <stdio.h>
#include <string.h>

struct num{
	int real;
    int imag;
};

int main(void){
    struct num n;
    struct num *ptr = &n;
    printf("n:%p, n.real:%d, and n.imag:%d\n", &n, n.real, n.imag);
    printf("ptr:%p, ptr.real:%d\n", ptr, (*ptr).real);
}
