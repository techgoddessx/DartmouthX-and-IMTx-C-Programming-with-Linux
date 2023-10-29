#include <stdio.h>
int main(void) {
    // if it is true, do this
    // if it is false, do not do this
    //FALSE : 0  0.0  
    //TRUE : all the other values (positive or even negative)
    int weatherIsGood = 0; // It's cloudy!!
    if(weatherIsGood){
        printf("The weather is good!\n");
        printf("That's great, I can go outside!\n");
    }else{
        printf("The weather is bad!\n");
        printf("Too bad, I have to stay home!\n");
    }
    return 0;
}
