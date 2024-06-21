#include<stdio.h>

struct time
{
	int hr,min,sec;
};

int main()
{
	struct time t1,t2,result;
	
	printf("Time_1: \n");
	scanf("%d%d%d",&t1.hr,&t1.min,&t1.sec);
	
	printf("Time_2: \n");
	scanf("%d%d%d",&t2.hr,&t2.min,&t2.sec);
	
	// ADD both the timelines
	result.sec=t1.sec+t2.sec;
	result.min=t1.min+t2.min+result.sec/60;
	result.hr=t1.hr+t2.hr+result.min/60;
	
	// Adjust minustes and seconds
	result.min%=60;
	result.hr%=60;
	
	// Display
	printf("Resultant time: %02d:%02d:%02d\n",result.hr,result.min,result.sec); 
}
