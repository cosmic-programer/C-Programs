#include<stdio.h>
int main()
{
	int a,b,c,d,e,f=1,g;
	scanf("%d",&a);
	system("cls");
	b=a;
	for(c=1;c<=a;c++)
	{
		for(d=b;d>=0;d--)
		printf(" ");
		for(e=1;e<=c;e++)
		printf("%2d",f);
		printf("\n");
		f++;
		b--;
	}
}
