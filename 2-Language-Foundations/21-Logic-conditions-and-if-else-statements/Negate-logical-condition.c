#include <stdio.h>
int main(void)
{
	int sunny = 0;
	int vacation = 0;
	int NOTsunny = !sunny;
	int NOTsunnyANDvacation = !sunny && vacation;

	if (NOTsunnyANDvacation){
		printf("it's cloudy but at least I am on vacation!\n");	
	}
	int NOTsunnyANDNOTvacation = !sunny && !vacation;

	if (NOTsunnyANDNOTvacation){
		printf("It's neither sunny nor am I on vacation\n");
	}	
	return 0;
}
