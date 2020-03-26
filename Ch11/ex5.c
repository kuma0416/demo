#include <stdio.h>
#include <string.h>

int main(void){
    char vocabulary[100][80];
    char sentence[80];
    int variable = 0;
    int count[100] = {0};

    while(scanf("%s", sentence) != EOF){
        printf("this is '%s' round\n", sentence);
        if(variable == 0){
            strcpy(vocabulary[variable], sentence);
            count[variable]++;
            variable++;
        } else {
            for(int i=0;i<variable;i++){
                printf("now i is:%d | sentence:%s | vocabulary:%s | result:", i, sentence, vocabulary[i]);
                if(sentence == vocabulary[i]){
                    printf("equal\n");
                    count[i]++;
                    break;
                } else {
                    strcpy(vocabulary[variable], sentence);
                    count[variable]++;
                }
                printf("--------------------------------------------------------------\n");
            }
            variable++;
        }
        for(int i=0;i<variable;i++){
            printf("count[%d]:%d | vocabulary[%d]:%s\n", i, count[i], i, vocabulary[i]);
            printf("----------------------------------\n");
        }
    }
    /*for(int i=0;i<variable;i++){
        printf("%d, %s\n", count[i], vocabulary[i]);
    }*/
    return 0;
}
//hasn't finished a little difficult.