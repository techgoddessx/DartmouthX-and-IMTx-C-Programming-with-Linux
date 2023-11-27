#include <stdio.h>
#include <stdlib.h>
struct student{
	char fn[30];
	char ln[30];
	int age;
	double grade;
};
int main(void){
	struct student num1;
	scanf("%s",num1.fn);
	scanf("%s",num1.ln);
	scanf("%d %lf",&num1.age,&num1.grade);
	
	printf("%s %s %d %.1lf%%\n",num1.fn,num1.ln,num1.age,num1.grade);

	return 0;
}


