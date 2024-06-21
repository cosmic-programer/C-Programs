#include<stdio.h>
int main()
{
	int n;
	int n1=0,n2=1;
	int n3;
	
	n3 = n1+n2;
	
	printf("Max_Length: ");
	scanf("%d",&n);
	
	printf("Fibonacci Series:%d %d ",n1,n2);
	int i;
	
	for(i=3;i<=n;i++)
	{
		printf("%d ",n3);
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
}