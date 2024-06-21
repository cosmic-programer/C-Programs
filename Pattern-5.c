#include<stdio.h>
int main()
{
	int n,i,j,k=1;
	scanf("%d",&n);
	system("cls");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%3d",k);
			k++;
		}
		printf("\n");
	}
}
