#include<stdio.h>

int main()
{
	int i=0,n = 10;
	for(i=0;i<n;i++)
		printf("%6d%c",n,(i%10==9||i==n-1)?'\n':' ');
	return 0;
}
