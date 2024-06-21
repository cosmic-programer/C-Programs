#include<Stdio.h>
int main()
{
	int n;
	printf("Number: ");
	scanf("%d",&n);
	
	printf("Number of digits: %d",digi(n));
}

int rem;
int sum=0;
int cnt=0;

int digi(int n)
{
	if(n!=0)
	{
		rem = n%10;
		sum = sum*10 + rem;
		cnt++;
		digi(n/10);
	}
	else
	return cnt;
}
