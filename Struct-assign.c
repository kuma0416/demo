#include <stdio.h>
#include <string.h>

struct student{
	char name[20];
	int id;
	char phone[10];
	float grade[4];
	int birth_year;
	int birth_month;
	int birth_day;
};

int main(void){
	//use initialize to assign content to struct type variable
	//struct student john = {"John Smith", 12345, "1234567", {3.6, 4.5, 6.2, 4.0}, 2000, 1, 1};
	//assign variablecontent individualy
	struct student john;
	strcpy(john.name, "John smith");
	john.id = 12345;
	strcpy(john.phone, "1234567");
	for(int i=0;i<4;i++){
		john.grade[i] = i+1;
	}
	john.birth_year = 2000;
	john.birth_month = 1;
	john.birth_day = 1;
	printf("student name is:%s\n", john.name);
	printf("student id is:%d\n", john.id);
	printf("student phone is:%s\n", john.phone);
	printf("student grade is:%f %f %f %f\n", john.grade[0], john.grade[1], john.grade[2], john.grade[3]);
	printf("student birthday is:%d/%d/%d\n", john.birth_year, john.birth_month, john.birth_day);
}
