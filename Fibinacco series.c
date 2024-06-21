#include<stdio.h>
int n;
int main()
{
	int n1=0,n2=1;
	
	printf("Max: ");
	scanf("%d",&n);
	
	printf("%d ",n2);
	fib(n1,n2,n);
}

int fib(int n1,int n2,int n)
{
	static int i=1;
	int nxt;
	
	if(i==n)
	return 0;
	else
	{
		nxt = n1+n2;
		n1 = n2;
		n2 = nxt;
		printf("%d ",nxt);
		
		i++;
		fib(n1,n2,n);
	}
}
