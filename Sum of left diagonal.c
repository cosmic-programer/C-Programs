#include<stdio.h>
int main()
{
	int n[100][100],i,j,r,sum=0,m;
	printf("Enter the size of square matrix: ");
	scanf("%d",&r);
	m=r;
	printf("Enter the elements of the matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		scanf("%d",&n[i][j]);
//		if(((i==r-1) && j<1) || ((j==r-1) && i<1) || ((i==(r-r/2+0.5) && (j==r-r/2+0.5))))
//		sum+=n[i][j];
	}
	system("cls");
	printf("Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		printf("%3d",n[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		m=m-1;
		for(j=0;j<r;j++)
		{
			if(j==m)
			sum+=n[i][j];
		}
	}
	printf("Sum = %d",sum);
}
