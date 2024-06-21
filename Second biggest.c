#include<stdio.h>
int main()
{
	int n[100],i,j,temp=0;
	printf("Enter the elements of an array: \n");
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
	system("cls");
	printf("Array: ");
	for(i=0;i<5;i++)
	printf("%3d",n[i]);
	printf("\n");
	for(i=0;i<5;i++)
	{
		temp=0;
		for(j=i+1;j<5;j++)
		{
			if(n[i]>n[j])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	printf("Sorted array: ");
	for(i=0;i<5;i++)
	printf("%2d",n[i]);
	printf("\nSecond largest no. is %d",n[3]);
}
