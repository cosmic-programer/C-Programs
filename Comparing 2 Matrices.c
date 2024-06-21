#include<stdio.h>
int main()
{
	int  a1[100][100],a2[100][100],i,j,r1,c1,r2,c2,temp=0;
	printf("Input rows and columns of the 1st matrix: \n");
	scanf("%d%d",&r1,&c1);
	printf("Input rows and columns of the 2nd matrix: \n");
	scanf("%d%d",&r2,&c2);
	system("cls");
	printf("Enter the elements of 1st matrix: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		scanf("%d",&a1[i][j]);
	}
	system("cls");
	printf("Enter the elements of 2nd matrix: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		scanf("%d",&a2[i][j]);
	}
	system("cls");
	printf("Matrix_1: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		printf("%3d",a1[i][j]);
		printf("\n");
	}
	printf("Matrix_2: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		printf("%3d",a2[i][j]);
		printf("\n");
	}
	if(r1==r2 && c1==c2)
	{
		printf("The Matrices can be compared : \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				if(a1[i][j]!=a2[i][j])
				{
					temp=0;
					break;
				}
				else
				temp=1;
			}
		}
	}
	else
	{
		printf("The matrices cannot be compared: \n");
	}
	if(temp == 1)
	printf("Two Matrices are equal");
	else
	printf("But, two matrices are not equal");
}
