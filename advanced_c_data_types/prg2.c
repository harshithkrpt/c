#include <stdio.h>

struct student
{
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};

void readStudent(struct student *ptr);
void printStudent(struct student stud);

int main(void)
{
    struct student learner;
    struct student me;
    readStudent(&me);
    printStudent(me);
    return 0;
}

// passing structures to functions
void printStudent(struct student learner)
{
    printf("Name : %s %s\n", learner.firstName, learner.lastName);
    printf("Average Age : %.2lf", learner.aveGrade);
}

// passing structures to functions as references
void readStudent(struct student *studentptr)
{
    printf("First Name : ");
    scanf("%s", studentptr->firstName);
    printf("Last Name : ");
    scanf("%s", (*studentptr).lastName);
    printf("Year of Birth : ");
    scanf("%d", &studentptr->birthYear);
    printf("Average Grade : ");
    scanf("%lf", &studentptr->aveGrade);
}