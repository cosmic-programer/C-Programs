#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",2*i-1);
		sum=sum+2*i-1;
	}
	printf("Sum : %d",sum);
}
