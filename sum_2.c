// WAP in c to add numbers using call by reference.
#include<stdio.h>

long add_two_numbers(long *,long *);

int main()
{
	long i,j,sum;
	
	printf("Values: ");
	scanf("%d%d",&i,&j);
	
	sum = add_two_numbers(&i,&j);
	
	printf("Sum: %d",sum);
}

long add_two_numbers(long *n1,long *n2)
{
	return *n1+*n2;
}
