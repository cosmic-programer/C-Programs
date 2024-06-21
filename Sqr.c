#include<stdio.h>
int main()
{
	int n,i,sum=0,power=0;
	scanf("%d",&n);
	system("cls");
	printf("Power : ");
	for(i=1;i<=n;i++)
	{
		power=pow(i,2);
		printf("%d ",power);
		sum=sum+power;
	}
	printf("\nSUM : %d",sum);
}
