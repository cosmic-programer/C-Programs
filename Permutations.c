#include<stdio.h>
int main()
{
	char inputstring[100];
	
	printf("Enter a string: ");
	scanf("%s",inputstring);
	
	int length = strlen(inputstring);
	
	printf("Permutations of the string: ");
	generatepermutations(inputstring,0,length-1);	
}

// function to swap two characters
void swap(char *a,char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

// function to generate all permutations of a string
void generatepermutations(char *str,int start,int end)
{
	int i;
	
	if(start == end)
	printf("%s\n",str);
	else
	{
		for(i=start;i<=end;i++)
		{
			// Swap the current character with the character at position 'i'
			swap((str+start),(str+i));
			
			// Recursively generate permutations for the remaining characters
			generatepermutations(str,start+1,end);
			
			// Undo the swap to backtrack and try the next possibility
			swap((str+start),(str+i));
		}
	}
}
