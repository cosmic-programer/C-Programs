#include<stdio.h>
int main()
{
	int n[100][100],i,j,flag=1;
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
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(n[i][j]!=1 && n[j][i]!=0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	printf("IM");
	else
	printf("NIM");
}
