#include<stdio.h>
int main()
{
	int n[10],i,s,sum,esum=0,j;
	printf("Enter the size of the array: ");
	scanf("%d",&s);
	printf("Enter the elements of the array: \n");
	for(i=0;i<s;i++)
	scanf("%d",&n[i]);
	system("cls");
	printf("The given array: ");
	for(i=0;i<s;i++)
	printf("%3d",n[i]);
	printf("\nThe given sum: ");
	scanf("%d",&sum);
	for(i=0;i<s-1;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(n[i]+n[j]==sum)
			{
				printf("Pair of elements can make the given sum by the value of index %d and %d.\n",j,i);
				return;
			}
		}
	} 
	printf("No pair can make the given sum.");
}
