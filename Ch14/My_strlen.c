#include <stdio.h>

int my_strlen(char *string);

int main(void){
	char string[128];
	scanf("%s", string);
	printf("my strlen(string) = %d\n", my_strlen(string));
}

int my_strlen(char *string){
	if(*string=='\0'){
		return 0;
	} else {
		return(my_strlen(string+1) + 1);
	}
}
