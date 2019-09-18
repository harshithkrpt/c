#include <stdio.h>

struct student
{
    char firstName[5];
    char lastName[5];
    int birthYear;
    double aveGrade;
};

int main(void)
{
    struct student me;

    printf("Size : %zu.\n", sizeof(struct student));
}