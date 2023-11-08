#include<stdio.h>
#include<conio.h>
main()
{
	
	float  phy,che,bio,math,comp,total,per;
	
	printf("Physics Mark := ");
	scanf("%f",&phy);
	
	printf("Chemistry Mark := ");
	scanf("%f",&che);
	
	printf("Biology Mark := ");
	scanf("%f",&bio);
	
	printf("Maths Mark := ");
	scanf("%f",&math);
	
	printf("Computer Mark := ");
	scanf("%f",&comp);
	
	total=phy+che+bio+math+comp;
	printf("\n\nTotal := %0.2f /500",total);
	
	per=total/5;
	
	printf("\n\nPer = %0.2f %%",per);
	if(per>=90)
	{
		printf("\n\n'Grade 'A''");
	}
	else if(per>=80)
	{
		printf("\n\n'Grade 'B''");
	}
	else if(per>=70)
	{
		printf("\n\n'Grade 'C''");
	}
	else if(per>=60)
	{
		printf("\n\n'Grade 'D''");
	}
	else if(per>=50)
	{
		printf("\n\n'Grade 'E''");
	}
	else if(per>=40)
	{
		printf("\n\n'Grade 'F''");
	}
	else
	{
		printf("\n\n'Better luck next time.'");
	}
	
}