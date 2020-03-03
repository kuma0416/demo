#include <stdio.h>

int main(){
    int s, c;
    int x[100][100];
    int average = 0;
    scanf("%d %d", &s, &c);
    for(int i=0;i<s;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &x[i][j]);
        }
    }
    for(int i=0;i<s;i++){
        for(int j=0;j<c;j++){
            average += x[i][j];
        }
        average = average/c;
        printf("student average:%d\n", average);
        average = 0;
    }
    for(int j=0;j<c;j++){
        for(int i=0;i<s;i++){
            average += x[i][j];
        }
        average = average/s;
        printf("subject average:%d\n", average);
        average = 0;
    }
}