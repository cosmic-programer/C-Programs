#include<stdio.h>
int main()
{
	int i,j;
	int diff;
	scanf("%d%d",&i,&j);
	diff=j-i;
	if(diff>0)
	printf("Profit : %d",diff);
	else
	printf("Loss : %d",diff);
}
