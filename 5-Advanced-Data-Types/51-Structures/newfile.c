#include <stdio.h>
struct student{
	char firstname[20];
	char lastname[10];
	int age;
	double grade;
};
int main(void){
	struct student me = {"fatimazahraa","abbari",22,100};
	printf("%s %s is %d and has a grade of %lf%%",me.firstname,me.lastname,me.age,me.grade);
