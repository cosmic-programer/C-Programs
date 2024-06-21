#include<stdio.h>
int main()
{
	int n[100],odd[100],even[100],i,j=0,k=0;
	printf("Enter Array elements : \n");
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
	system("cls");
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		{
			even[j]=n[i];
			j++;
		}
		else
		{
			odd[k]=n[i];
			k++;
		}
	}
	printf("Even arrays are : ");
	for(i=0;i<j;i++)
	printf("%2d",even[i]);
	printf("\nOdd arrays are : ");
	for(i=0;i<k;i++)
	printf("%2d",odd[i]);
}
