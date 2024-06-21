#include<stdio.h>
int main()
{
	int n,i,div=0,sum=0;
	scanf("%d",&n);
	system("cls");
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			sum+=i;
		}
	}
	printf("\nSum : %d\n",sum);
	if(sum==n)
	printf("The no. %d is a perfect no.",n);
	else
	printf("The no. %d is not a perfect no.",n);
}
