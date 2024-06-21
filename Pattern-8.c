#include<stdio.h>
int main()
{
	int n,i,j,s,t;
	scanf("%d",&n);
	system("cls");
	t=n;
	for(i=1;i<=n;i++)
	{
		for(s=t;s>=0;s--)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("* ");
		printf("\n");
		t-=2;
		i++;
	}
}
