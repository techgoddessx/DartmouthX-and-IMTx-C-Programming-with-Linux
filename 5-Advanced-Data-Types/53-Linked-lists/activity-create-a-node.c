#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

// Write your createStudent function here (and any other functions you see fit)

struct student *createStudent(char studentName[], int studentAge){
        struct student * newaddress;
        newaddress =(struct student *)malloc(sizeof(struct student));
        newaddress->age = studentAge;
        strcpy(newaddress->name, studentName);
        newaddress->next = NULL;
        return newaddress;
}   
