#include<stdio.h>

struct point {
	int x;
	int y;
};

void readPoint(struct point *);
void printPoint(struct point );
void printTriangle(struct point[]);
int main()
{
	struct point triangle[3];
	int i;
	for(i=0;i<3;i++) readPoint(&triangle[i]);	
	printTriangle(triangle);
	return 0;
}

void readPoint(struct point *ptr)
{
	printf("\nEnter a new Point : \n");
	printf("x-cord :  ");
	scanf("%d",&ptr->x);
	printf("y-cord :");
	scanf("%d",&ptr->y);
}

void printTriangle(struct point *ptr)
{
	int i;
	for(i=0;i<3;i++)
		printPoint(ptr[i]);
}

void printPoint(struct point pt)
{
	printf("\n(%d %d)\n",pt.x,pt.y);
}
