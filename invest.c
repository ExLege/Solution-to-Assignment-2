/*******************************************************************************
* 
* Purpose: Assignment #2 solution
*
* Author: Nathan Agbomedarho
*
*******************************************************************************/
#include<stdio.h>
int main()
{

	
	double invest,rate,add, start,end,interest;
	int year;
	
	
	do
	{
        
		printf("Enter initial investment amount: ");
	
	    scanf("%lf",&invest);
        
        if (invest<0)
        {
            printf("Invalid data entered. Initial investment cannot be negative.\n");
		    
        }
	}while(invest<0);
	
	do
	{
		
        printf("Enter total years: ");
        
        scanf("%d",&year);

        if (year<=0)
        {
            printf("Invalid data entered. Years must be greater than 0.\n");
		    
        }

	}while(year<=0);

	

	
	do
	{
		
        printf("Enter return rate: ");
        
        scanf("%lf",&rate);

        if (rate<0)
        {
            printf("Invalid data entered. Rate cannot be negative.\n");
		    
        }

	}while(rate<0);

	

	
	do
	{   
        printf("Enter additional contribution per year: ");
            
        scanf("%lf",&add);

        if (add<0)
        {
            printf("Invalid data entered. Contribution cannot be negative.\n");
		    
        }
        

	}while(add<0);
	

	printf("\n");
	printf("%-10s","Year");

	printf("%-20s","Start Balance");

	printf("%-20s","Interest");

	printf("%-20s","End Balance");

	printf("\n**************************************************************************\n");

	start = invest;

	for(int i=1;i<=year;i++)
	{


		
		interest=start*rate/100;
		
		end=start+interest;
		
		printf("%-10d",i);
		
		

		printf("%-20.2f",start);

		printf("%-20.2f",interest);
		
		printf("%-20.2f",end);
		
		printf("\n");
		
		start=end+add;

}

return 0;

}
