#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};

struct digit *createDigit(int dig);
struct digit *append(struct digit *end, struct digit *newdigitptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start);
struct digit *searchNumber(struct digit *start, int);
struct digit *readNumber();

int main()
{
    struct digit *start, *ptr;
    int num = 5;
    start = readNumber();
    printNumber(start);
    ptr = searchNumber(start, num);
    if (ptr)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig)
{
    struct digit *ptr = (struct digit *)malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit *append(struct digit *end, struct digit *newdigitptr)
{
    end->next = newdigitptr;
    return end->next;
}

void printNumber(struct digit *start)
{
    struct digit *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->num);
        ptr = ptr->next;
    }
}

void freeNumber(struct digit *start)
{
    struct digit *ptr;
    ptr = start;
    struct digit *tmp;
    while (ptr != NULL)
    {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber()
{
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n')
    {
        d = c - 48;
        newptr = createDigit(d);
        if (start == NULL)
        {
            start = newptr;
            end = start;
        }
        else
        {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return start;
}

struct digit *searchNumber(struct digit *start, int number)
{
    struct digit *ptr = start;
    while ((ptr != NULL) && (ptr->num != number))
    {
        ptr = ptr->next;
    }
    return ptr;
}
