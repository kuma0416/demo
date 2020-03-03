#include <stdio.h>

int main(){
    double x;
    double sum;
    int n=15;
    double x_molecule;

    scanf("%lf", &x);
    sum = x;
    for(int i=1;i<=15;i++){
        x_molecule = 1.0;
        for(int j=1;j<=2*i+1;j++){
            x_molecule *= x/j;
        }
        if(i%2==1){
            x_molecule = -x_molecule;
        }
        sum += x_molecule;
    }
    printf("%f", sum);
}