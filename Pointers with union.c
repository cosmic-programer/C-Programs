#include<stdio.h>

union emapp
{
	char *ename;
	char stname[100];
};

int main()
{
	union emapp ep,*pt;
	
	ep.ename="Jhon Mc \0Donald";
	
	pt=&ep;
	
	printf("%s  %s",pt->ename,(*pt).ename);
}
