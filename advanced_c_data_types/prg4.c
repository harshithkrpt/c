#include<stdio.h>

struct point {
	int x;
	int y;
};
void readpoint(struct point *);
void printPoint(struct point );
int main()
{
	struct point z;
	readpoint(&z);
	printPoint(z);
	return 0;
}

void readpoint(struct point *ptr)
{
	printf("\nEnter a new Point : \n");
	printf("x-cord :  ");
	scanf("%d",&ptr->x);
	printf("y-cord :");
	scanf("%d",&ptr->y);
}

void printPoint(struct point pt)
{
	printf("\n(%d %d)\n",pt.x,pt.y);
}
