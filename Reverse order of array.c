#include<stdio.h>
int main()
{
	int a[100];
	int i,n;
	
	printf("Size: ");
	scanf("%d",&n);
	
	printf("Array: ");
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	
	printf("Reverse order: ");
	for(i=(n-1);i>=0;i--)
	printf("%2d",*(a+i));
}
