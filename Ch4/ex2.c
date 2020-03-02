#include <stdio.h>
int main(){
    int a, b, c, d, e, f;
    int first, second, third;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    first = a*a + b*b;
    second = c*c + d*d;
    third = e*e + f*f;
    if (first >= second && first >= third){
        printf("%d\n%d", a, b);
    } else if (second >= third){
        printf("%d\n%d", c, d);
    } else {
        printf("%d\n%d", e, f);
    }
}