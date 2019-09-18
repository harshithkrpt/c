#include <stdio.h>

struct student
{
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};

int main(void)
{

    struct student you = {
        "harshith",
        "kurapati",
        1999,
        3.5};
    printf("Name : %s %s\n", you.firstName, you.lastName);
    printf("Average Age : %.2lf", you.aveGrade);
}