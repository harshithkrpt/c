#include<stdio.h>

int bitcount(unsigned x)
{
	int b;	
	for(b=0;x!=0;x>>=1) 
		if(x & 01) b++;
	return b;
}

int main()
{
	int num;
	scanf("%d",&num);
	printf("%d HAS %d ones ",num,bitcount(num));
	return 0;
}
