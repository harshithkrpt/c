#include<stdio.h>

void str_cat(char s[],char t[]);

int main()
{
	char s[] = "Hello "; 
	char p[] = "World";
	str_cat(s,p);
	printf("%s",s);
	return 0;
}


void str_cat(char s[],char t[])
{
	int i,j;
	i = j = 0;
	while(s[i] != '\0') i++;
	while((s[i++] = t[j++]) != '\0');
}
