#include<stdio.h>
int main()
{
	int n,i,j,sum=0,temp=0;
	scanf("%d",&n);
	system("cls");
	for(i=1;i<=n;i++)
	{
		for(j=1;j>0;j--)
		{
			temp=10*temp+9;
			printf("%d+",temp);
		}
		sum=sum+temp;
	}
	printf("\nSum : %d",sum);
}
