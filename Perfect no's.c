#include<stdio.h>
int main()
{
	int n,i,j,sum;
	scanf("%d",&n);
	system("cls");
	printf("The perfect numbers within the range : ");
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			sum+=j;
		}
		if(sum==i)
		printf("%d ",i);
	}
}
