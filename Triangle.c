#include<stdio.h>
int main()
{
	int i,j,k;
	scanf("%d%d%d",&i,&j,&k);
	if(i>0 && j>0 && k>0)
	{
		if(i==j==k)
		printf("Eqilatral triangle");
		else if(i==j || j==k || k==i)
		printf("Isosceles triangle");
		else
		printf("Scalene triangle");
	}
}
