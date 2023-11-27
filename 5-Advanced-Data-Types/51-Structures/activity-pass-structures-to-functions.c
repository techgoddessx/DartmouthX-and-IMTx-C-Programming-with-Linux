#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}
void readDate(struct date *d){
	scanf("%d %d %d",&(*d).year,&(*d).month,&(*d).day); // year month day 
}
void printDate(struct date d){
	if (d.day <= 9){
		printf("%d/0%d/%d",d.month,d.day,d.year);
	}else{
		printf("%d/%d/%d",d.month,d.day,d.year);
	}
}
