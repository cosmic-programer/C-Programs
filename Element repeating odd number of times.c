#include<stdio.h>
int main()
{
	int n[100000],i,j,s,cnt;
	printf("Size of the array: ");
	scanf("%d",&s);
	printf("Enter the elements of the array: \n");
	for(i=0;i<s;i++)
	scanf("%d",&n[i]);
	system("cls");
	printf("The given array: ");
	for(i=0;i<s;i++)
	printf("%3d",n[i]);
	printf("\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			if(n[i]==n[j])
			cnt++;
		}
		if(cnt%2!=0)
		{
			printf("The element repeated odd number of times is %d",n[i]);
			return;
		}
	}
	printf("No element is repeating odd number of times.");
}
