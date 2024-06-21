#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	system("cls");
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=10;i++)
		{
			printf("%d x %d = %d\n",j,i,j*i);
		}
		printf("\n");
	}
}
