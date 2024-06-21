#include<stdio.h>

struct student
{
	char name[100];
	int age;
	int total_marks;
};

int main()
{
	
	struct student s1,s2;
	
	printf("\nEnter student deatils: \n");
	printf("----------------------\n\n");
	
		printf("Name: ");
		scanf("%s",&s1.name);
		printf("Age: ");
		scanf("%d",&s1.age);
		printf("Total marks: ");
		scanf("%d",&s1.total_marks);
		printf("\n\n");
		
		printf("Name: ");
		scanf("%s",&s2.name);
		printf("Age: ");
		scanf("%d",&s2.age);
		printf("Total marks: ");
		scanf("%d",&s2.total_marks);
		printf("\n\n");
		
	printf("Average marks: %.2f",(float)(s2.total_marks+s1.total_marks)/2);
}
