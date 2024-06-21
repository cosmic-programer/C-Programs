#include<stdio.h>
#include<stdlib.h>
int main()
{
	int l=0;
	char str[100];
	
	printf("String: ");
	fgets(str,sizeof str,stdin);
	
	l=length(str,(sizeof str)/(sizeof str[0]));
	
	printf("Lenght of %s: %d",str,l-1);
}

int length(char *ch,int size)
{
	int i,cnt=0;
	
	for(i=0;i<size;i++)
	{
		if(*ch != '\0')
		{
			cnt++;
			ch++;
		}
		else
		break;
	}
	return cnt;
}
