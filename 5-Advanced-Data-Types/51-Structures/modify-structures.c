#include <stdio.h>

// Define a structure named 'student' to store information about a student
struct student {
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};

int main(void) {
    // Declare a variable 'learner' of type 'struct student' to store student information
    struct student learner;

    // Prompt the user to input the first name of the student
    printf("First name: ");
    scanf("%s", learner.firstName);

    // Prompt the user to input the last name of the student
    printf("Last name: ");
    scanf("%s", learner.lastName);

    // Prompt the user to input the birth year of the student
    printf("Year of birth:");
    scanf("%d", &learner.birthYear);

    // Prompt the user to input the average grade of the student
    printf("Average grade: ");
    scanf("%lf", &learner.aveGrade);
    
    // Display the collected information about the student
    printf("Name: %s %s\n", learner.firstName, learner.lastName);
    printf("Year of birth: %d\n", learner.birthYear);
    printf("Average grade: %.2lf\n", learner.aveGrade);
    
    return 0;
}
