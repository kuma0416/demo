#include <stdio.h>
#include <sys/stat.h>

int main(void){
    char pathname[80];
    struct stat statInfo;
    scanf("%s", pathname);
    stat(pathname, &statInfo);

    if(S_IRUSR & statInfo.st_mode)
        printf("USR  can read.\n");
    if(S_IWUSR & statInfo.st_mode)
        printf("USR  can write.\n");
    if(S_IXUSR & statInfo.st_mode)
        printf("USR  can exec.\n");

    /*if((0400>>3) & statInfo.st_mode)
        printf("GRP  can read.\n");
    if((0200>>3) & statInfo.st_mode)
        printf("GRP  can write.\n");
    if((0100>>3) & statInfo.st_mode)
        printf("GRP  can exec.\n");*/
    if(0040 & statInfo.st_mode)
        printf("GRP  can read.\n");
    if(0020 & statInfo.st_mode)
        printf("GRP  can write.\n");
    if(0010 & statInfo.st_mode)
        printf("GRP  can exec.\n");

    if(0004 & statInfo.st_mode)
        printf("OTH  can read.\n");
    if(0002 & statInfo.st_mode)
        printf("OTH  can write.\n");
    if(0001 & statInfo.st_mode)
        printf("OTH  can exec.\n");
}