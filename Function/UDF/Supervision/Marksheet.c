#include<stdio.h>
#include<conio.h>
struct marksheet
{
	int id,rollno,chem,maths,phy,total;
	char name[50];
	float per;	
};

main()
{
	struct marksheet student[5];
	char name[50];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("Enter details of Student %d :",i+1);
		printf("\nRoll no => ");
		scanf("%d",&student[i].rollno);
		printf("Name => ");
		scanf(" %[^\n]s",&name);
		strcpy(student[i].name,name);
		printf("Chemistry => ");
		scanf("%d",&student[i].chem);
		printf("Mathematics => ");
		scanf("%d",&student[i].maths);
		printf("Physics => ");
		scanf("%d",&student[i].phy);
		
		printf("\n\n");
	}
	printf("\nOutput\n\n");
	
	for(i=0; i<5; i++)
	{
		student[i].total = student[i].chem + student[i].maths + student[i].phy;
		student[i].per = student[i].total*100/300;
	}
	
	for(i=0; i<5; i++)
	{
		printf("%s(%d)",student[i].name,student[i].rollno);
		printf("\nChemistry => %d",student[i].chem);
		printf("\nMathematics => %d",student[i].maths);
		printf("\nPhysics => %d",student[i].phy);
		printf("\nTotal => %d/300",student[i].total);
		printf("\nPercentage => %.2f%%",student[i].per);
		printf("\n\n");
	}
	
	
}


