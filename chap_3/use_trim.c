#include<stdio.h>
#include "trim.h"
int main()
{

	int a = 10;
	char s[] = "trim\n";
	printf("Experience : %s",s);
	trim(s);
	printf("Trim : %s",s);
	return 0;
}
