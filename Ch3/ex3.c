#include <stdio.h>
int main(){
    int i = 0;
    int thousand = 0, hundred = 0, tenth = 0, digits = 0;
    int sum = 0;
    scanf("%d", &i);
    thousand = i/1000;
    hundred = (i - thousand*1000)/100;
    tenth = (i - thousand*1000 - hundred*100)/10;
    digits = i - thousand*1000 - hundred*100 - tenth*10;
    sum = thousand + hundred + tenth + digits;
    printf("%d", sum);
}