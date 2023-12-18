#include<stdio.h>
#include<conio.h>
main()
{
	printf("Find Gross Salary Program ?");
	
	float bs,hra,da,ta;		// bs = basic salary;

	printf("\n\nBasic Salary := ");
	scanf("%f",&bs);
	
	// if basic salary <=15000 then [hra = 10% + da = 7% + ta = 4%] ;
	
	if(bs<=15000)
	{
        hra = (bs * 10) / 100;
        printf("\nHRA := %0.2f",hra);
        da = (bs * 7) / 100;
        printf("\nDA := %0.2f",da);
	    ta = (bs * 4) / 100;
	    printf("\nTA := %0.2f",ta);
	}
	// if basic salary <=40000 then [hra = 13% + da = 9% + ta = 7%]
	else
	{
		if(bs<=35000) 
		{
			hra = (bs * 13) / 100; 
			printf("\nHRA := %0.2f",hra);
			da = (bs * 9) / 100;
			printf("\nDA := %0.2f",da); 
			ta = (bs * 7) / 100;
			printf("\nTA := %0.2f",ta); 
		}
		else	
		{
			hra = (bs * 15) / 100;
			printf("\nHRA := %0.2f",hra);
			da = (bs * 12) / 100;
			printf("\nDA := %0.2f",da);
			ta = (bs * 9) / 100;
			printf("\nTA := %0.2f",ta);
		}
	}
	
	float gs;			//gs = gross salary;
	
	gs = bs+hra+da+ta;
	
	printf("\n\nGross Salary := %0.2f",gs);

}
