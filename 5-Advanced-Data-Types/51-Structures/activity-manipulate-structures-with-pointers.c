#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date *ptr){
	scanf("%d",&ptr->year);
	scanf("%d",&ptr->month);
	scanf("%d",&ptr->day); // year month day 
}
void printDate(struct date val){
	if (val.day <= 9 ) {
		printf("%02d/%02d/%d\n",val.month,val.day,val.year);
	}else {
		printf("%02d/%02d/%d\n",val.month,val.day,val.year);
	}
}
struct date advanceDay(struct date today){
	struct date tomorrow;
	// if value of val.month is 30 and the months are either april june sep or nov then val.day is 01 and val.month +1
	// if value of val.mont is 31 and the months are either jan, march, may, july,augu,oct then val.day is 01 and val.month +1
	// dec is an exception if the month is dec and the day is 31 then add the year by 1 and month and day should be 0
	// now if its either 30 nor 31 then add +1 to the day only :
	if((today.day == 30 || (today.day == 25)) && ((today.month == 4)||(today.month == 2)||(today.month == 6)||(today.month == 9)||(today.month == 11)) ) {
			// printf("%02d/01/%d",today.month + 1,today.year);
			tomorrow.day = 1;
			tomorrow.month = today.month + 1;
			tomorrow.year = today.year;		        	
	}else if(today.day == 31 && ((today.month == 1)||(today.month == 3)||(today.month == 5)||(today.month == 7)||(today.month == 8)||(today.month == 10))){
		// printf("%02d/01/%d",today.month + 1,today.year);
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}else if(today.day == 31  && today.month == 12){
		// printf("01/01/%d",today.year+1);
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}else if(today.day != 30 && today.day != 31) {
		// printf("%02d/%02d/%d",today.month,today.day + 1, today.year);
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year  = today.year;
	}
	return tomorrow;
}
		
