#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[50], int studentAge);
struct student * append(struct student * end, struct student * newStudptr); 
void printStudents(struct student *start);
/* add other prototypes here if needed*/

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;

    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);

    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    tmp = start->next;

    free(start);

    start = tmp;
    tmp = start->next;

    free(start);
    free(tmp);

    return 0;
}

/* Place your function definitions here. Be sure to include the definitions for 
   createStudent() and append() as well as any other functions you created for 
   the previous tasks. */
   struct student *createStudent(char studentName[50], int studentAge){
        struct student * newaddy;
        newaddy = (struct student *) malloc(sizeof(struct student));
        newaddy->age = studentAge;
        strcpy(newaddy->name,studentName);                                                                                                                                                                                                         newaddy->next = NULL;                                                                                                                                                                                                                      return newaddy;
}
struct student * append(struct student * end, struct student * newStudptr){
        end->next = newStudptr;
        return (end->next);
}
void printStudents(struct student *start){
    struct student *end;
    end = start;
        while(end!=NULL){
                printf("%s is %d years old.\n",end->name,end->age);
                end = end->next;
        }
}
