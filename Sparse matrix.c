#include<stdio.h>
int main()
{
	int n[100][100],i,j,r,c,cnt0=0,cnt=0;
	printf("Enter the size of row and column: \n");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&n[i][j]);
		for(j=0;j<c;j++)
		{
			if(n[i][j]==0)
			cnt0++;
			if(n[i][j]!=0)
			cnt++;
		}
	}
	system("cls");
	printf("Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%3d",n[i][j]);
		printf("\n");
	}
	if(cnt0>cnt)
	{
		printf("The given matrix is sparse matrix\n");
		printf("There are %d number of zeros in the matrix",cnt0);
	}
	else
	printf("The given matrix is not a sparse matrix");
}
