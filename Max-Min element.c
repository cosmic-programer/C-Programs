#include<stdio.h>
int main()
{
	int n[5],i,big=0,small=0;
	printf("Elements of Array-1 : \n");
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
	system("cls");
	big=n[0];
	small=n[0];
	for(i=0;i<5;i++)
	{
		if(big<n[i]);
		big=n[i];
		if(small>n[i])
		small=n[i];
	}
	printf("Maximum element : %d\n",big);
	printf("Minimum element : %d",small);
}
