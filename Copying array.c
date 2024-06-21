#include<stdio.h>
int main()
{
	int a[5],b[5],i;
	printf("Elements of first array :\n");
	for(i=1;i<=5;i++)
	scanf("%d",&a[i]);
	printf("Elements of second array :\n");
	for(i=1;i<=5;i++)
	{
		b[i]=a[i];
		printf("%2d",b[i]);
	}
}
