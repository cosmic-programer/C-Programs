#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter i,j values\n");
	scanf("%d%d",&i,&j);
	printf("Option : 1\nOption : 2\nOption : 3\n");
	scanf("%d",&n);
	if(n==1)
	{
		int sum=0;
		sum=i+j;
		printf("Sum = %d",sum);
	}
	if(n==2)
	{
		int sub=0;
		sub=i-j;
		printf("Subtraction = %d",sub);
	}
	if(n==3)
	{
		int mul=0;
		mul=i*j;
		printf("Multiplication = %d",mul);
	}
}
