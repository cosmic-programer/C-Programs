#include<stdio.h>
int main()
{
	int n[100][100],i,j,m[100][100],sum[100][100];
	printf("Enter the elements of 1st matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&n[i][j]);
	}
	printf("Enter the elements of 2nd matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&m[i][j]);
	}
	system("cls");
	printf("Matrix 1: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%3d",n[i][j]);
		printf("\n");
	}
	printf("Matrix 2: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%3d",m[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		sum[i][j]=n[i][j]+m[i][j];
	}
	printf("SUM of matrics: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%3d",sum[i][j]);
		printf("\n");
	}
}
