#include<stdio.h>
#include<stdlib.h>

struct point {
	int x;
	int y;
};

void readPoint(struct point *);
void printPoint(struct point );
void printPolygon(struct point *,int );
int main()
{
	struct point *polygon;
	int i,num;
	printf("Vertices of polygon : ");
	scanf("%d",&num);
	polygon = (struct point *) malloc(num * sizeof(struct point));

	for(i=0;i<num;i++) readPoint(&polygon[i]);	
	printPolygon(polygon,num);
	free(polygon);
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

void printPolygon(struct point *ptr,int num)
{
	int i;
	for(i=0;i<num;i++)
		printPoint(ptr[i]);
}

void printPoint(struct point pt)
{
	printf("\n(%d %d)\n",pt.x,pt.y);
}
