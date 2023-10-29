#include <stdio.h>
int main(void) {
    int sunny = 1;
    int vacation = 1;
    int sunAndVacation = sunny && vacation;
    // 1 && 1 : 1,  1 && 0 : 0, 0 && 1 : 0, 0 && 0 : 0
    if (sunAndVacation) {
        printf("Yeah!!\n");
    } else {
        printf("Too bad!\n");
    }
    int sunORvacation = sunny || vacation;
    //1||1:1 1||0:1 0||1:1 0||0:0
    if(sunORvacation){
        printf("Going well: it is sunny OR I am on vacation OR both!\n");
    }else{
        printf("Not going well: it is NEITHER sunny NOR am I on vacation!\n");
    }
    return 0;
}
