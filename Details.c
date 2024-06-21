#include<stdio.h>
int main()
{
	int rno;
	char name;
	int m,p,c;
	int total=0;
	float per=0;
	scanf("%d",&rno);
	scanf("%s",&name);
	scanf("%d%d%d",&m,&p,&c);
	printf("Roll no. : %d\n",rno);
	printf("Name : %s\n",name);
	printf("Marks of physics : %d\n",p);
	printf("Marks of chemistry : %d\n",c);
	printf("Marks of mathamatics : %d\n",m);
	total=m+p+c;
	per=total%100;
	printf("Total : %d\n",total);
	printf("Percentage : %f\n",per);
}
