#include <stdio.h>
#include <assert.h>

typedef struct student{
    char name[20];
    int id;
    char phone[10];
    float grade[4];
    int year;
    int month;
    int day;
} Student;

void print_student(Student *s){
    puts(s->name);
    printf("id = %d \n", s->id);
    puts(s->phone);
    printf("%f %f %f %f", s->grade[0], s->grade[1], s->grade[2], s->grade[3]);
    printf("\n%d %d %d\n", s->year, s->month, s->day);
}

void dump_file(char *filename, char *mode){
    FILE *fp;
    char c;
    int count=0;
    fp=fopen(filename, mode);
    assert(fp!=NULL);
    while((c=fgetc(fp))!=EOF){
        printf("%02x ", (unsigned char)c);//記得加unsigned char
        count++;
        if(count%16==0){
            putchar('\n');
        }
    }
    fclose(fp);//要記得close
    printf("\nThere are %d bytes in file:%s", count, filename);
}

int main(void){
    FILE *fp;
    Student a[2]={{"John Smith", 12345, "1234567", {4, 4, 4, 4}, 2000, 1, 1},{"Mary Smith", 67890, "7654321", {3, 3, 3, 3}, 2000, 1, 1}};
    Student b[2];
    int c;
    int count;

    fp=fopen("file", "wb");
    assert(fp!=NULL);
    fwrite(a, sizeof(Student), 2, fp);
    fclose(fp);

    fp=fopen("file", "rb");
    assert(fp!=NULL);
    fread(b, sizeof(Student), 2, fp);
    fclose(fp);

    for(int i=0;i<2;i++){
        print_student(&b[i]);
    }
    dump_file("file", "rb");
    return 0;
}