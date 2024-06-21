#include<stdio.h>
int main()
{
	int b,a,c;
	float root;
	scanf("%d%d%d",&b,&a,&c);
	root=pow(b,2)-4*a*c;
	if(root>0)
	printf("ROOT : %f",root);
	else
	printf("The root is imaginary and no solution");
}
