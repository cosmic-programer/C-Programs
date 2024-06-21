#include<stdio.h>
int main()
{
	int *ptr;
	int n;
	int i;
	printf("SIZE: ");
	scanf("%d",&n);
	
	ptr = (int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	scanf("%d",(ptr+i));
	
	array(ptr,n);
}
int j=0;
void array(int p[],int n)
{
	if(j<n)
	printf("%d ",*(p+j));
	else
	exit(0);
	j++;
	array(p,n);
}
