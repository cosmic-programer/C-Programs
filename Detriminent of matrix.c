#include<stdio.h>
int main()
{
	int n[100][100],i,j,det=0;
	printf("Enter the elements of matrix: \n");
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
	for(i=0;i<3;i++)
	det+=n[0][i]*(n[1][(i+1)%3]*n[2][(i+2)%3]-n[1][(i+2)%3]*n[2][(i+1)%3]);
	printf("Determinent of the matrix: %d",det);
}
