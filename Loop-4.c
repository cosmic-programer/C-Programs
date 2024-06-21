#include<stdio.h>
int main()
{
	int n,i,j,sum=0,temp=0;
	scanf("%d",&n);
	system("cls");
	for(i=1;i<=n;i++)
	{
		temp=0;
		for(j=1;j<=i;j++)
		{
			temp=temp*10+1;
		}
		printf("%d+",temp);
		sum=sum+temp;
	}
	printf("\nSum : %d",sum);
}
