#include<stdio.h>
int main()
{
	int id;
	char name[10];
	int unit;
	float chrg,schrg,total;
	printf("Enter IDNO,name,unit\n");
	scanf("%d",&id);
	scanf("%s",&name);
	scanf("%d",&unit);
	if(unit>=100 && unit<=199)
	chrg=unit*1.20;
	else if(unit>=200 && unit<400)
	chrg=unit*1.50;
	else if(unit>=400 && unit<600)
	chrg=unit*1.80;
	else if(unit>=600)
	chrg=unit*2.00;
	if(unit>=400)
	schrg=unit*0.15;
	system("cls");
	printf("Customer IDNO : %d\n",id);
	printf("Customer name : %s\n",name);
	printf("Units consumed : %d\n",unit);
	printf("Amount charges per unit : %f\n",chrg);
	printf("Surcharge Amount : %f\n",schrg);
	total=schrg+chrg;
	printf("Net amount paid by the customer : %f\n",total);
}
