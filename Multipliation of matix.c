#include<stdio.h>
int main()
{
	int n[100][100],i,j,k,m[100][100],mul[100][100];
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
	printf("\nMatrix 1: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",n[i][j]);
		printf("\n");
	}
	printf("\nMatrix 2: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",m[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(k=0;k<3;k++)
			mul[i][j]+=n[i][k]*m[k][j];
		}
	}
	printf("\nPRODUCT of matrices: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",mul[i][j]);
		printf("\n");
	}
}
