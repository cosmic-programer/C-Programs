#include<stdio.h>
int main()
{
	int n,i,sum=0,j;
	scanf("%d",&n);
	system("cls");
	printf("The even no. are : ");
	for(i=1;i<=n;i++)
	{
		j=i*2;
		printf("%d ",j);
		sum=sum+j;
	}
	printf("\nSum : %d",sum);	
}
