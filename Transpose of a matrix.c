#include<stdio.h>
int main()
{
	int n[100][100],i,j;
	printf("Enter the elements of the matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&n[i][j]);
	}
	system("cls");
	printf("Matrix : \n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%3d",n[i][j]);
		printf("\n");
	}
	printf("Transpose of a given matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%3d",n[j][i]);
		}
		printf("\n");
	}
}
