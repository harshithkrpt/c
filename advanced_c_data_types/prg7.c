#include <stdio.h>
#include <stdlib.h>

struct point
{
	int x;
	int y;
	struct point *next;
};
void printPoint(struct point *);
struct point *append(struct point *, struct point *);
struct point *createPoint(int x, int y);
void freePoint(struct point *start);
int main()
{
	struct point *start, *end, *newpt;
	int num, i;
	int x, y;
	printf("How Many Points : ");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("x : ");
		scanf("%d", &x);
		printf("y : ");
		scanf("%d", &y);
		newpt = createPoint(x, y);
		if (i == 0)
		{
			start = end = newpt;
		}
		else
		{
			end = append(end, newpt);
		}
	}
	printf("You Entered : ");
	printPoint(start);
	freePoint(start);
	return 0;
}

struct point *createPoint(int x, int y)
{
	struct point *ptr;
	ptr = (struct point *)malloc(sizeof(struct point));
	ptr->x = x;
	ptr->y = y;
	ptr->next = NULL;
	return ptr;
}

struct point *append(struct point *end, struct point *newpt)
{
	end->next = newpt;
	return end->next;
}

void printPoint(struct point *start)
{
	struct point *ptr;
	ptr = start;
	while (ptr != NULL)
	{
		printf("(%d %d)\n", (*ptr).x, (*ptr).y);
		ptr = (*ptr).next;
	}
}

void freePoint(struct point *start)
{
	struct point *ptr = start;
	while (ptr != NULL)
	{
		start = ptr;
		ptr = ptr->next;
		free(start);
	}
}