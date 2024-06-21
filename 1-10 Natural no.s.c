#include<stdio.h>
int main()
{
	int n,sum=0;
	for(n=1;n<=10;n++)
	{
		printf("%d\n",n);
		sum=sum+n;
	}
	printf("Sum : %d",sum);
}
