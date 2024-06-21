#include<stdio.h>
int main()
{
	int a[100][100],i,j,n,rsum[10],csum[10];
	printf("Size of square matrix: ");
	scanf("%d",&n);
	printf("Enter the elements of the matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	system("cls");
	printf("Matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%3d",a[i][j]);
		printf("\n");
	}
// Sum of rows...
	for(i=0;i<n;i++)
	{
		rsum[i]=0;
		for(j=0;j<n;j++)
		rsum[i]+=a[i][j];
	 } 
// Sum of columns...
	for(i=0;i<n;i++)
	{
		csum[i]=0;
		for(j=0;j<n;j++)
		csum[i]+=a[j][i];
	}
	printf("The sum of rows and columns of the matrix is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%4d",a[i][j]);
		printf("%5d",rsum[i]);
		printf("\n");
	}
	for(j=0;j<n;j++)
	printf("%4d",csum[j]);
	printf("\n");
}
