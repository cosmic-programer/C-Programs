#include<stdio.h>
int main()
{
	int n[200],i;
	for(i=1;i<=10;i++)
	scanf("%d",&n[i]);
	system("cls");
	printf("Elements of array are : ");
	for(i=1;i<=10;i++)
	printf("%d ",n[i]);
}
