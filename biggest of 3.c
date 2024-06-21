#include<stdio.h>
int main()
{
	int big1(int,int,int);
	int big2(int,int,int);
	int big3(int,int,int);
	int i,j,k;
	scanf("%d%d%d",&i,&j,&k);
	printf("big1 : %d\n",big1(i,j,k));
	printf("big2 : %d\n",big2(i,j,k));
	printf("big3 : %d\n",big3(i,j,k));
}
int big1(int x,int y,int z)
{
	int big=0;
	big=(x>y&&x>z)?x:y;
	big=(big>=y && big>=z)?big:z;
	return big;
}
int big2(int x,int y,int z)
{
	int big=0;
	big=(x>y&&x>z)?x:((y>z)?y:z);
	return big;
}
int big3(int x,int y,int z)
{
	if(x>y&&x>z)
	return x;
	else if(y>z)
	return y;
	else
	return z;
}
