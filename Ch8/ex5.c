#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double ans1, ans2;
    scanf("%lf%lf%lf", &a, &b, &c);
    ans1 = (-b+sqrt(b*b-4*a*c))/2*a;
    ans2 = (-b-sqrt(b*b-4*a*c))/2*a;
    if(ans1 > ans2){
        printf("%f %f", ans2, ans1);
    } else printf("%f %f", ans1, ans2);
}