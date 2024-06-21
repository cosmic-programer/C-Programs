#include<stdio.h>
int main()
{
	int m[100],i,j,k,temp,n;
	printf("Input the size of array : \n");
	scanf("%d",&n);
	printf("\nEnter elements : \n");
	for(i=0;i<n;i++)
	scanf("%d",&m[i]);
	system("cls");
	printf("Input the value to be inserted : ");
	for(i=n;i<n+1;i++)
	scanf("%d",&m[i]);
	printf("\nAscending Array : ");
	for(i=0;i<=n;i++)
	{
		temp=0;
		for(j=0;j<=n;j++)
		{
			if(m[i]<m[j])
			{
				temp=m[j];
				m[j]=m[i];
				m[i]=temp;
			}
		}
	}
	for(i=0;i<=5;i++)
	printf("%4d",m[i]);
}
