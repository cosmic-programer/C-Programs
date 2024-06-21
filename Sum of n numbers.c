#include<stdio.h>
int main()
{
	int n;
	printf("Number: ");
	scanf("%d",&n);
	
	int Sum = sum(n);
	printf("Sum: %d",Sum);
}


int sum(int n)
{
	if(n==1)
	return n;
	else
	return n+sum(n-1);
}
