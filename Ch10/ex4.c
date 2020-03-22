//還有地方可以改進
#include <ctype.h>
#include <stdio.h>

int main(){
    int nflag = 0;
    char c;
    while(scanf("%c", &c)){
        if(c == '/'){
            nflag = 1;
        }
        if(nflag == 1){
            printf(" ");
        } else {
            printf("%c", c);
        }
        if(c == '\n' && nflag == 1){
            nflag = 0;
            printf("\n");
        }
    }   
}