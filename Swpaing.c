#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n;
	int *ar,temp=0;
	
	printf("Size: ");
	scanf("%d",&n);
	
	printf("Before swaping: \n");
	for(i=0;i<n;i++)
	scanf("%d",ar+i);
	
	printf("After swaping: \n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ar+i)>*(ar+j))
			{
				temp=*(ar+i);
				*(ar+i)=*(ar+j);
				*(ar+j)=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%3d",*(ar+i));
}
