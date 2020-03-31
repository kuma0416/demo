#include <stdio.h>
#include <string.h>
#include "date.h"

typedef struct student{
    char name[20];
    int id;
    char phone[10];
    float grade[4];
    Date birthday;
} Student;

int main(void){
	Student john;
	strcpy(john.name, "John smith");
	john.id = 12345;
	strcpy(john.phone, "1234567");
	for(int i=0;i<4;i++){
		john.grade[i] = i+1;
	}
	john.birthday.year = 2000;
	john.birthday.month = 1;
	john.birthday.day = 1;
	printf("student birthday is:%d/%d/%d\n", john.birthday.year, john.birthday.month, john.birthday.day);
}