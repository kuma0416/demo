#include <stdio.h>
#include <string.h>

int main(){

	int i = 1;
	int j = 2;
	int *ptr_to_int = &i;
	const int * ptr_to_const_int = &i;
	int * const const_ptr_to_int = &i;
	const int * const const_ptr_to_const_int = &i;
	ptr_to_int = &j;
	*ptr_to_int += 3;
	ptr_to_const_int = &j;
	*ptr_to_const_int += 3;
	const_ptr_to_int = &j;
	*const_ptr_to_int += 3;
	const_ptr_to_const_int = &j;
	*const_ptr_to_const_int += 3;
	return 0;
	
}
