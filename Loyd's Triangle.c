#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	system("cls");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
				printf("1");
				else
				printf("0");
			}
			printf("\n");
		}
		else
		{
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
				printf("0");
				else
				printf("1");
			}
			printf("\n");
		}
	}
}