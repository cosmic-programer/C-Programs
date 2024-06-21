#include<stdio.h>
int main()
{
	int a[100],sum=0;
	int i,n;
	int *pt;
	
	printf("Size: ");
	scanf("%d",&n);
	
	printf("Array: ");
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	
	printf("Sum: ");
	for(i=0;i<n;i++)
	{
		sum+=*(a+i);
	}
	printf("%d",sum);
}
