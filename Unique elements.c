#include<stdio.h>
int main()
{
	int n[5],i,j,cnt=0;
	printf("Enter the elements of array : \n");
	for(i=1;i<=5;i++)
	scanf("%d",&n[i]);
	system("cls");
	printf("Arrays : ");
	for(i=1;i<=5;i++)
	printf("%2d",n[i]);
	printf("\nUnique elements : ");
	for(i=1;i<=5;i++)
	{
		cnt=0;
		for(j=1;j<=5;j++)
		{
			if(i!=j)
			{
				if(n[i]==n[j])
				cnt++;
			}
		}
		if(cnt!=0)
		printf("%d ",n[i]);
	}
}
