#include<stdio.h>
int main()
{
	int m=29,*ab;
	ab=&m;
	printf("Address of m: %u\n",&m);
	printf("Value of m: %d\n\n",m);
	
	printf("Address of pointer ab: %u\n",ab);
	printf("Content of pointer ab: %d\n\n",*ab);
	
	m=34;
	
	printf("Address of pointer ab: %u\n",ab);
	printf("Content of pointer ab: %d\n\n",*ab);
	
	*ab=7;
	
	printf("Address of m: %u\n",&m);
	printf("Value of m: %d",m);
}
