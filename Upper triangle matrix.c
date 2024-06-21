#include<stdio.h>
int main()
{
	int n[100][100],i,j,s;
	printf("Enter the size of the square matrix: ");
	scanf("%d",&s);
	printf("Enter the elements of the matrix: \n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		scanf("%d",&n[i][j]);
	}
	system("cls");
	printf("Matrix: \n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		printf("%3d",n[i][j]);
		printf("\n");
	}
	printf("Setting zero in upper triangle matrix: \n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			if(i<j)
			n[i][j]=0;
			printf("%3d",n[i][j]);
		}
		printf("\n");
	}
}
