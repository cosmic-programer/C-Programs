#include<stdio.h>
#include<stdlib.h>

struct person
{
	char name[50];
	int age;
};

int main()
{
	int i;
	struct person* people[3];
	
	for(i=0;i<3;i++)
	{
		people[i]=(struct person*)malloc(sizeof(struct person));
	}
	
	strcpy(people[0]->name,"John");
	people[0]->age=25;
	
	strcpy(people[1]->name,"Jane");
	people[1]->age=30;
	
	strcpy(people[2]->name,"Bob");
	people[2]->age=22;
	
	printf("People information: \n\n");
	for(i=0;i<3;i++)
	{
		printf("Person %d: \n",i+1);
		printf("Name: %s\n",people[i]->name);
		printf("Age: %d\n",people[i]->age);
		printf("\n\n");
	}
	
	for(i=0;i<3;i++)
	free(people[i]);
}
