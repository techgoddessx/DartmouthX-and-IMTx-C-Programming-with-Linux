#include <stdio.h>
struct student {
	char fn[10];
	char ln[10];
	int age;
	double grade;
};
void readData(struct student *ds);
void printData(struct student name);
int main(void){
	struct student myname;
	readData(&myname);
	printData(myname);
}
void readData(struct student *ds){
	printf("2s 1i 1d: ");
	scanf("%s",(*ds).fn);
	scanf("%s",(*ds).ln);
	scanf("%d",&(*ds).age);
	scanf("%lf",&(*ds).grade);
}
void printData(struct student name){
	printf("%s %s\n%d %.1lf",name.fn,name.ln,name.age,name.grade);
}
