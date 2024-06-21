#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	system("cls");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)
			k=1;
			else
			k=k*(i-j+1)/j;
			printf("%3d",k);
		}
		printf("\n");
	}
}
