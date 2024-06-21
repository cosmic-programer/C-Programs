#include<stdio.h>
int main()
{
	int a,b,*x,*y,sum=0;
	x=&a;y=&b;
	printf("Value of a: ");
	scanf("%d",x);
	printf("Value of b: ");
	scanf("%d",y);
	sum=*x+*y;
	printf("sum: %d",sum);
}
