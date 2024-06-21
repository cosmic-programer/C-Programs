#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	float *element;
	
	printf("Size: ");
	scanf("%d",&n);
	
	element=(float *)calloc(n,sizeof(float));
	
	if(element==NULL)
	{
		printf("No memory is allocated");
		exit(0);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Number %d: ",i+1);
		scanf("%f",element+i);
		// "element+i" represents the dynamic storing of elements in i'th position.
	}
	
	for(i=0;i<n;i++)
	{
		if(*element<*(element+i))
		*element=*(element+i);
	}
	
	printf("The alrgest element is: %.2f",*element);
}
