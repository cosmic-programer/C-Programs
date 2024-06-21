#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	system("cls");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d",i);
		printf("\n");
	}
}
