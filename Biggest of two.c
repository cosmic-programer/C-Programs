#include<stdio.h>
int main()
{
	int *a,*b;
	int i,j;
	
	a=&i;b=&j;
	
	printf("Values: ");
	scanf("%d%d",a,b);
	
	printf("Biggest of two: %d",(*a>*b)?*a:*b);
}
