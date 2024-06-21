#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int i;
	
	printf("String: ");
	fgets(str,sizeof str,stdin);
	
	number_of(str,((sizeof(str)/(sizeof(str[00])))));
	
}

void number_of(char *st,int size)
{
	int i;
	int vcnt=0,ccnt=0;
	
	for(*st=*st;*st!='\0';st++)
	{
		if(*st=='A' || *st=='E' || *st=='I' || *st=='O' || *st=='U' || *st=='a' || *st=='e' || *st=='i' || *st=='o' || *st=='u')
		vcnt++;
		else
		ccnt++;
	}
	
	printf("\nNumber of vowles: %d\n",vcnt);
	printf("Number of constants: %d",ccnt-1);
}


// while (*pt != '\0') {
//        
//        if (*pt == 'A' || *pt == 'E' || *pt == 'I' || *pt == 'O' || *pt == 'U' ||
//            *pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u') {
//            ctrV++; 
//        } else {
//            ctrC++; 
//        }
//        pt++; 
//    }
