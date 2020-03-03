#include <stdio.h>

int main(){
    int n, m;
    int map[100][100] = {0};
    int cross = 0, din = 0, turn = 0, dead = 0;
    int temp = 0;
    scanf("%d%d", &n, &m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &map[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(map[i][j]==1){
                temp = 0;
                if(i-1<0){//最上排
                    if(j-1<0){//最上最左
                        temp = map[i][j+1] + map[i+1][j];
                    } else {//最上排
                        if(map[i+1][j]==1){
                            temp = map[i][j+1] + map[i][j-1] + map[i+1][j];
                        }
                    }
                } else if (j-1<0){//最左排,0.0除外
                    if(map[i][j+1]==1){
                        temp = map[i][j+1] + map[i-1][j] + map[i+1][j];
                    }
                } else {
                    temp = map[i][j+1] + map[i][j-1] + map[i+1][j] + map[i-1][j];
                    if(temp==2 && ((map[i-1][j]==1 || map[i+1][j]==1)&&(map[i][j-1] || map[i][j+1]))){
                        temp = 2;
                    } else if (temp == 1 || temp==3 || temp == 4) ;else temp=0;
                }
                switch (temp)
                {
                case 1:
                    dead++;
                    break;
                case 2:
                    turn++;
                    break;
                case 3:
                    din++;
                    break;
                case 4:
                    cross++;
                    break;
                default:
                    break;
                }
            }
        }
    }
    printf("%d\n%d\n%d\n%d", cross, din, turn, dead);
}