#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	FILE *fp;
	fp=fopen("Basic Info.html","w");
	
	char name[50];
	char address[50];
	char study[20];
	char gender[10];
	int age;
	
	
	printf("Enter your Name : ");
	gets(name);
	
	printf("Enter your Address : ");
	gets(address);
	
	printf("Enter your Qualification : ");
	gets(study);
	
	printf("Enter your Age : ");
	scanf("%d",&age);
	
	printf("Enter your Gender : ");
	scanf("%s",&gender);
	
	fprintf(fp,"<html>");
	fprintf(fp,"<head>");
	fprintf(fp,"<title> Self Introduction </title>");
	fprintf(fp,"</head>");
	fprintf(fp,"<body bgcolor=pink>");
	fprintf(fp,"<h1><font color=red ><center><u>Basic Information</u></center></font></h1>");
	fprintf(fp,"<h3><b>Name : %s</b></h3>",name);
	fprintf(fp,"<h3><b>Age : %d</b></h3>",age);
	fprintf(fp,"<h3><b>Gender : %s</b></h3>",gender);
	fprintf(fp,"<h3><b>Address : %s</b></h3>",address);
	fprintf(fp,"<h3><b>Qualification : %s</b></h3>",study);
	
	fprintf(fp,"</body");
	fprintf(fp,"</html>");
		
}