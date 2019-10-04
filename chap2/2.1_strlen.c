#include<stdio.h>

int strlen(char s[])
{
	int i;
	i=0;
	while(s[i] != '\0') ++i;
	return i;
}

int main()
{
	printf("%d",strlen("Hello"));
	return 0;
}
