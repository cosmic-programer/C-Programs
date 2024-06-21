#include<stdio.h>
int main()
{
	int n,fact=1,i=1;
	scanf("%d",&n);
	system("cls");
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial = %d",fact);
}
