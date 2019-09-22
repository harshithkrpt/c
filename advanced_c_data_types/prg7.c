#include<stdio.h>
#include<stdlib.h>

struct point {
	int x;
	int y;
	struct point *next;
};
void printPoint(struct point *);

int main()
{
	struct point pt1 = {1,2,NULL};
	struct point pt2 = {-2,3,NULL};
	struct point pt3 = {5,-4,NULL};
	struct point *start;
	start = &pt1;
	pt1.next = &pt2;
	pt2.next = &pt3;
	printPoint(start);
	return 0;
}	


void printPoint(struct point *start)
{
	struct point *ptr;
	ptr = start;
	while(ptr != NULL)
	{
		printf("(%d %d)\n",(*ptr).x,(*ptr).y);
		ptr = (*ptr).next;
	}
}
