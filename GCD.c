// Greatest common diviser
#include<stdio.h>
int main()
{
	int a,b,g;
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		int t=a;
		a=b; 
		b=t;	
	}
	
	while(!(b==0))
	{
		int t=a;
		a=b;
		b= t%b;
	}
	printf("%d is the GCD",a);
}
