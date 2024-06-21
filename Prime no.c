#include<stdio.h>
int main()
{
	int n,i,cnt;
	scanf("%d",&n);
	system("cls");
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		cnt++;
	}
	if(cnt==2)
	printf("%d is a prime no.",n);
	else
	printf("Not a prime no.");
}
