#include<stdio.h>
int main()
{
	int n,i,j,k=1,s,t;
	scanf("%d",&n);
	t=n;
	system("cls");
	for(i=1;i<=n;i++)
	{
		for(s=t;s>=0;s--)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%3d",k);
			k++;
		}
		printf("\n");
		t--;
	}
}
