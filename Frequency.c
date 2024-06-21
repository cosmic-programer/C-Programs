#include<stdio.h>
int main()
{
	int n[100],i,j,freq=0;
	printf("Elements of Array are : \n");
	for(i=1;i<=5;i++)
	scanf("%d",&n[i]);
	system("cls");
	n[i]=n[j];
	for(i=1;i<=5;i++)
	{
		freq=0;
		for(j=1;j<=5;j++)
		{	
			if(n[i]==n[j])
			freq++;
		}
		printf("%d occurs : %d\n",n[i],freq);
	}
}
