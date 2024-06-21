#include<stdio.h>
int main()
{
	int n[10],i,j;
	scanf("%d",&j);
	system("cls");
	printf("Values of array : ");
	for(i=1;i<=j;i++)
	scanf("%d",&n[i]);
	printf("Values of array in reverse order : ");
	for(i=j;i>0;i--)
	printf("%2d",n[i]);
}
