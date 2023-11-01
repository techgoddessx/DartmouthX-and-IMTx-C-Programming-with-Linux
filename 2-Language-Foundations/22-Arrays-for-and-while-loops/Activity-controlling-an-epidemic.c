#include <stdio.h>

//Your program should first read an integer representing the total population of the area.
//Knowing that a person was infected on day 1
//and that each infected person contaminates two new people every day
//you must calculate the day at which the entire population of the area will be infected.

int main(void){
        int total_population;

        scanf("%d",&total_population);

        int day = 1;
        int infected_people = 1;

        while(infected_people < total_population)
        {
            infected_people *= 3;
                day++;
        }
        printf("%d",day);

        return 0;
}
