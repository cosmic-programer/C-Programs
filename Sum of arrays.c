#include<stdio.h>
int main()
{
	int n[5],i,sum=0;
	printf("Values of arrays are :\n");
	for(i=1;i<=5;i++)
	scanf("%d",&n[i]);
	for(i=1;i<=5;i++)
	sum+=n[i];
	printf("Sum : %d",sum);
}
