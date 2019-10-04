#include<stdio.h>

int main()
{
	int c,n1;
	n1 = 0;
	while((c = getchar()) != EOF)
		if(c == '\n') ++n1;
	printf("\n%d Lines ",n1);
	return 0;
}
