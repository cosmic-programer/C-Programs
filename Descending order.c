#include<stdio.h>
int main()
{
	int n[100],i,j,temp=0;
	printf("Enter elements : \n");
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
	system("cls");
	printf("Array : ");
	for(i=0;i<5;i++)
	printf("%5d",n[i]);
	printf("\nDescending array : ");
	for(i=0;i<5;i++)
	{
		temp=0;
		for(j=i+1;j<5;j++)
		{
			if(n[i]<n[j])
			{
				temp=n[j];
				n[j]=n[i];
				n[i]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	printf("%5d",n[i]);
}
