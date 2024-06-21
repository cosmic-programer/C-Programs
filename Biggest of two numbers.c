#include<stdio.h>
int main()
{
	int a,b;
	int big=0;
	
	printf("Values: ");
	scanf("%d%d",&a,&b);
	
	big=biggest(&a,&b);
	
	printf("%d is biggest",big);
}

int biggest(int *i,int *j)
{
	if(*i>*j)
	return *i;
	else
	return *j;
}
