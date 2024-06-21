#include<stdio.h>
int main()
{
	int n[100][100],i,j;
	printf("Enter the elements of a matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&n[i][j]);
	}
	system("cls");
	printf("Matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%3d",n[i][j]);
		printf("\n");
	}
}
