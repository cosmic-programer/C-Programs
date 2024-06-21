#include<stdio.h>
int main()
{
	int n[100][100],i,j,sum=0;
	printf("Enter the elements of the matrix: \n");
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
		printf("%d",n[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>j)
			sum+=n[i][j];
		}
	}
	printf("Sum of left Diagonal: %d",sum);
}
