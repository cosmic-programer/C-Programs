#include<stdio.h>
int main()
{
	int n[100],i,j,big,big2;
	printf("Enter the elements of an array: \n");
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
	system("cls");
	big=n[0];
	for(i=0;i<5;i++)
	{
		if(big<n[i])
		{
			big=n[i];
			j=i;
		}
	}
	big2=0;
	for(i=0;i<5;i++)
	{
		if(i==j)
		{
			i++;
			i--;
		}
		else
		{
			if(big2<n[i])
			big2=n[i];
		}
	}
	printf("\n");
	printf("The second largest element of an array: %d",big2);
}
