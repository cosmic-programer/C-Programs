#include<stdio.h>
#include<stdlib.h>
int main()
{
	char alph[27];
	int x;
	char *ptr;
	
	ptr=alph;
	
	for(x=0;x<26;x++)
	{
		*ptr=x+'A'; // Assigning ASCII values of alphabets to the array
		ptr++; // Moving the pointer to the next location
	}
	
	ptr=alph;
	
	printf("The alphabets are: \n");
	for(x=0;x<26;x++)
	{
		printf("%2c",*ptr);
		ptr++;
	}
}

//int main()
//{
//	char *alp;
//	char i;
//	
//	printf("The alphabets are: \n\n");
//	for(i='A';i<='Z';i++)
//	printf("%2c",alp+i);
//}
