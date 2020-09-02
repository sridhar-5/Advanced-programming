#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

struct bank{
	int accountnumber;
	char accountholdername[150];
	char accounttype[150];
	float balance;
}b[100000];

int count;

int main()
{
	int n,i;
	printf("please enter no of users in the bank : ");
	scanf("%d",&n);
	for (i = 0;i < n;i++)
	{
		printf("\n please enter the account number : ");
		scanf("%d",&b[i].accountnumber);
		printf("\n please enter the account holder name : ");
		scanf("%s",&b[i].accountholdername);
		printf("\n please enter the account type : ");
		scanf("%s",&b[i].accounttype);
		printf("\n please enter the available balance : ");
		scanf("%f",&b[i].balance);
	}
	
	printf("\n-------------------------------------------------------------");
	printf("\n 1. PLEASE ENTER 1 FOR BALANCE ENQUIRY");
	printf("\n 2. PLEASE ENTER 2 FOR WITHDRAWL");
	
	printf("\n 3. PLEASE ENTER 3 TO PRINT PERSONAL DETAILS");
	printf("\n 4. PLEASE ENTER 4 TO EXIT");
	printf("\n----------------------------------------------------------------");
	
	int a;
	i = 1;
	while (i == 1)
	{
		printf("\n PLEASE ENTER THE ACTION YOU WANT TO PERFORM : ");
		scanf("%d",&a);
		if (a == 1)
		{
			balance(n);
		}
		else if (a == 2)
		{
			withdrawl(n);
		}
		else if (a == 3)
		{
			printdetails(n);
		}
		else
		{
			i = 2;
		}
		
	}
}
	int balance(n)
	{
		int accountno,i;
		printf("\n PLEASE ENTER THE ACCOUNT NUMBER : ");
		scanf("%d",&accountno);
		for (i = 0; i < n; i++)
		{
			if(accountno == b[i].accountnumber)
			{
				printf("\n THE AVAILABLE BALANCE : %f",b[i].balance);
			}
		}
		
	}
    
	int withdrawl(int n)
	{
		int accountno,i;
		printf("PLEASE ENTER THE ACCOUNT NUMBER : ");
		scanf("%d",&accountno);
		float amt,jack;
		printf("\n PLEASE ENTER THE AMOUNT TO BE WITHDRAWN : ");
		scanf("%f",&amt);
		for ( i = 0; i < n;i++)
		{
			if (accountno == b[i].accountnumber)
			{
			    jack = b[i].balance - amt;
				b[i].balance = jack;
			}
		}
		count = count + 1;
		printf("THE CURRENT BALANCE : %f" , jack);
	}
	int printdetails(int n)
	{
		int accountno,i;
		printf("\n PLEASE ENTER YOUR ACCOUNT NUMBER : ");
		scanf("%d",&accountno);
		for( i = 0; i < n; i++)
		{
			if(b[i].accountnumber == accountno)
			{
				printf("\n NAME : %s", b[i].accountholdername);
				printf("\n ACCOUNT TYPE : %s" ,b[i].accounttype);
				printf("\n AVAILABLE BALANCE : %f",b[i].balance);
				printf("\n NUMBER OF WITHDRAWLS : %d",count);
			}
		}
	}
	
	
