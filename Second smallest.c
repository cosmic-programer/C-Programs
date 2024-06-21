#include<stdio.h>
int main()
{
	int n[100],i,j,small,small2;
	printf("Enter the elements of an array: \n");
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
	system("cls");
	small=n[0];
	for(i=0;i<5;i++)
	{
		if(small>n[i])
		{
			small=n[i];
			j=i;
		}
	}
	small2=n[0];
	for(i=0;i<5;i++)
	{
		if(i==j)
		{
			i++;
			i--;
		}
		else
		{
			if(small2>n[i])
			small2=n[i];
		}
	}
	for(i=0;i<5;i++)
	printf("%3d",n[i]);
	printf("\n");
	printf("The second smallest number is %d",small2);
}
