#include<stdio.h>
int main()
{
	int n[100],i,j,temp=0,m;
	printf("Enter a value for no. of elements: ");
	scanf("%d",&m);
	printf("Enter the values of an array: \n");
	for(i=0;i<m;i++)
	scanf("%d",&n[i]);
	system("cls");
	printf("Array: \n");
	for(i=0;i<m;i++)
	printf("%2d",n[i]);
	printf("\nInserting a no: \n");
	for(i=m;i<m+1;i++)
	scanf("%d",&n[i]);
	printf("\nAscending of an array: \n");
	for(i=0;i<m+1;i++)
	{
		temp=0;
		for(j=i+1;j<m+1;j++)
		{
			if(n[i]>n[j])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	for(i=0;i<m+1;i++)
	printf("%3d",n[i]);
}
