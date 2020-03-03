#include <stdio.h>

int main(){
    int number;
    int base, power=0;
    int prime=0;
    scanf("%d", &number);
    if(number%2==0){
        base = 2;
        power = 0;
        while(number%2==0){
            number/=2;
            power++;
        }
        printf("%d^%d\n", base, power);
    }
    for(int i=3;i<=number;i++){
        base = 0;
        power = 0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime = 0;
                break;
            } else {
                prime = 1;
            }
        }
        if(prime == 1){
            if(number%i==0){
                base = i;
                while(number%i==0){
                    number/=i;
                    power++;
                }
                printf("%d^%d\n", base, power);
            }
        }
    }
}