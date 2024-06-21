#include<stdio.h>
int main()
{
	int n,i;
	int a[n];
	
	printf("Size: ");
	scanf("%d",&n);
	
	printf("Array: ");
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	// Read and stores 'n' elements in the array a[n] using pointer arithmetic
	
	printf("Printing Array: \n");
	for(i=0;i<n;i++)
	printf("%3d",*(a+i));
	// Display the elements stored in the array using pointers
}
