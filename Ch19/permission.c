#include <stdio.h>
#include <sys/stat.h>

#define print_all_permission(buf) \
    print_permission(buf, USR)

#define print_permission(buf, user) \
    if (S_IR ## user & buf.st_mode) \
        printf(#user "can read.\n"); \
    if (S_IW ## user & buf.st_mode) \
        printf(#user "can write.\n"); \
    if (S_IX ## user & buf.st_mode) \
        printf(#user "can exec.\n");

int main(void){
    struct stat stat_info;
    char filename[80];
    scanf("%s", filename);
    stat(filename, &stat_info);
    print_all_permission(stat_info);
}