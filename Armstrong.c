#include<stdio.h>
int main()
{
	int n,i,j,sum=0,rem=0,temp=0;
	scanf("%d",&n);
	system("cls");
	printf("Armstrong numbers in the given range are : ");
	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		for(j=0;j<=i;j++)
		{
			rem=i%10;
			sum+=rem*rem*rem;
			i=i%10;
		}
		if(sum==temp)
		printf("%d ",i);
	}
}
