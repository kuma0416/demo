//Void can no use return in the end of the function.
//But ususally we often add it in the end to make it more readable.
#include <stdio.h>
void print_digits(int i);
int main(){
    int i = 0;
    scanf("%d", &i);
    print_digits(i);
    return 0;
}

void print_digits(int i){
    int num[20] ={0};
    int count = 0;
    if(i<0)return;
    while(i!=0){
        num[count] = i%10;
        count++;
        i /= 10;
    }
    for(int j=count-1;j>=0;j--)printf("%d\n", num[j]);
    //return;
}
