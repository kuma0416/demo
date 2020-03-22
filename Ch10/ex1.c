#include <ctype.h>
#include <stdio.h>

int main(){
    int digit = 0, al = 0, mom = 0, son = 0;
    char input, inputLower;
    while(scanf("%c", &input) != EOF){
        if(isdigit(input)){
            digit++;
        } else if (isalpha(input)){
            al++;
            inputLower = tolower(input);
            if(inputLower == 'a' || inputLower == 'e' || inputLower == 'i' || inputLower == 'o' || inputLower == 'u'){
                mom++;
            } else {
                son++;
            }
        }
    }
    printf("digit:%d, alpha:%d, vowel:%d, consonant:%d", digit, al, mom, son);
}