#include<stdio.h>
int main()
{
	int n;
	printf("MAX: ");
	scanf("%d",&n);
	recursion(n);
}
int i=1;
int recursion(int n)
{
	if(i<=n)
	{
		printf("%d ",i);
		
		if(i%10==0)
		printf("\n");
		
		i++;
	}
	else
	exit(0);
	
	recursion(n);
}
