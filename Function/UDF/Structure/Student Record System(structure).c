#include<stdio.h>
#include<conio.h>
struct Student
{
	int id,age,standard;
	char name[50],course[30],school[50],city[25];	
};
main()
{
	int i;
	char name[50],course[30],school[50],city[25];
	struct Student stu[3];
	
	printf("Students Detail's List\n\n");
	
	for(i=0; i<3; i++)
	{
		printf("Enter id : ");
		scanf("%d",&stu[i].id);
		
		printf("Enter Standard : ");
		scanf("%d",&stu[i].standard);
		
		printf("Enter name : ");
		scanf("%s",&name);
		strcpy(stu[i].name,name);
		
		printf("Enter age : ");
		scanf("%d",&stu[i].age);
		
		printf("Enter Course : ");
		scanf("%s",&course);
		strcpy(stu[i].course,course);
		
		printf("Enter School name : ");
		scanf("%s",&school);
		strcpy(stu[i].school,school);
		
		printf("Enter city : ");
		scanf("%s",&city);
		strcpy(stu[i].city,city);
		
		printf("\n");
			
	}
	
	printf("\nOutput : \n\n");
	
	for(i=0; i<3; i++)
	{
		printf("Student Id. : %d\n",stu[i].id);
		printf("Standard : %d\n",stu[i].standard);
		printf("Student name : %s\n",stu[i].name);
		printf("Student Age : %d\n",stu[i].age);
		printf("Student Course : %s\n",stu[i].course);
		printf("School Name : %s\n",stu[i].school);
		printf("City : %s\n",stu[i].city);
		
		
		
		
		printf("\n");
	}
}