#include<stdio.h>
int main()
{
	int n[5],i,j,cnt=0;
	printf("Enter array values :\n");
	for(i=1;i<=5;i++)
	scanf("%d",&n[i]);
	system("cls");
	printf("Arrays : ");
	for(i=1;i<=5;i++)
	printf("%2d",n[i]);
	printf("\n");
	printf("Enter a number :\n");
	scanf("%d",&j);
	for(i=1;i<=5;i++)
	{
		if(j==n[i])
		cnt++;
	}
	printf("Count : %d",cnt);
}
