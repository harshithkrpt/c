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
    printf("Fn : %zu.\n",sizeof(me.firstName));
    printf("Ln : %zu.\n",sizeof(me.lastName));
    printf("By : %zu.\n",sizeof(me.birthYear));
    printf("Ag : %zu.\n",sizeof(me.aveGrade));
}
