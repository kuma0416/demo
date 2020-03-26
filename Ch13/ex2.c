#include <stdio.h>
#include <string.h>

int main(void){
    int s1, s2, s3, s4;
    int as1, as2, as3, as4;
    int bs1, bs2, bs3, bs4;
    int scount=0, count=0;
    int temp;
    int total = 0;
    while(scanf("%d", &temp) != EOF){
        if(scount == 0){
            switch (count)
            {
            case 0:
                s1 = temp;
                count++;
                break;
            case 1:
                s2 = temp;
                count++;
                break;
            case 2:
                s3 = temp;
                count++;
                break;
            case 3:
                s4 = temp;
                count=0;
                scount++;
                break;
            default:
                break;
            }
        } else if (scount == 1){
            switch (count)
            {
            case 0:
                as1 = temp & s1;
                count++;
                break;
            case 1:
                as2 = temp & s2;
                count++;
                break;
            case 2:
                as3 = temp & s3;
                count++;
                break;
            case 3:
                as4 = temp & s4;
                count=0;
                scount++;
                break;
            default:
                break;
            }
        } else {
            switch (count)
            {
            case 0:
                bs1 = temp & s1;
                count++;
                break;
            case 1:
                bs2 = temp & s2;
                count++;
                break;
            case 2:
                bs3 = temp & s3;
                count++;
                break;
            case 3:
                bs4 = temp & s4;
                count=0;
                if(bs1 == as1 && bs2 == as2 && bs3 == as3 && bs4 == as4){
                    total++;
                }
                break;
            default:
                break;
            }
        }
    }
    printf("%d", total);
    return 0;
}