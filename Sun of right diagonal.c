#include<stdio.h>
int main()
{
	int n[100][100],i,j,r,c,sum=0;
	printf("Enter the size of the row: ");
	scanf("%d",&r);
	printf("Enter the size of the coloumn: ");
	scanf("%d",&c);
	printf("Enter the elements of the matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&n[i][j]);
	}
	system("cls");
	printf("Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%2d",n[i][j]);
		printf("\n");
	}
	printf("Addition of right diagonal elements is: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			sum+=nn[i][j];
		}
	}
	printf("%d",sum);
}
