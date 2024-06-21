#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,fact;
	
	printf("Number: ");
	scanf("%d",&n);
	
	find_fact(&n,&fact);
}

int find_fact(int *a,int *fact)
{
	int i;
	*fact=1;
	
	for(i=1;i<=*a;i++)
	{
		*fact*=i;
	}
	
	printf("\nFactorial of %d is: %d\n",*a,*fact);
}
