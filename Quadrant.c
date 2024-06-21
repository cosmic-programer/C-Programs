#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d%d",&i,&j);
	if(i>0&&j>0)
	printf("First Quadrant");
	else if(i<0&&j>0)
	printf("Second Quadrant");
	else if(i<0&&j<0)
	printf("Third Quadrant");
	else if(i>0&&j<0)
	printf("Fourth Quadrant");
}
