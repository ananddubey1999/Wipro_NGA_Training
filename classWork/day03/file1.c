/*

demo of nested if else sts


sy:
	if(cond1)
	{
		if(cond2)
		{
			if(cond3)
			{
				st3
			}
			st2	
		}
		else
		{
			if(cond4)
			{
				st4
			}
			st5
		}
	}
	else
	{
		if(cond5)
		{
			st5
		}
		else if(cond6)
		{
			st6
		}
		else if(cond7)
		{
			st7
		}
		else
		{
			st8
		}	
		st9	
	}


*/
/*
1. rel mart
2. dmart
3. kmart
*/

#include <stdio.h>


int main()
{
	int relmart,dmart,kmart;
	int open=0;
	int item = 0;
	int available=0;

	printf("\nrelmart is open: (0/1) ");
	scanf("%d",&relmart);
	if(relmart == 1)
		open = 1;
	else
		open = 0;
	printf("\ndmart is open: (0/1) ");
	scanf("%d",&dmart);
	if(dmart == 1)
		open = 1;
	else
		open = 0;
	printf("\nkmart is open: (0/1) ");
	scanf("%d",&kmart);
	if(kmart == 1)
		open = 1;
	else
		open = 0;

	printf("\nItems available");
	printf("\nPress,");
	printf("\n1. Sugar");
	printf("\n2. Tea");
	printf("\n3. Salt");
	printf("\nChoice: ");
	scanf("%d",&item);

	switch(item)
	{
		case 1:
			printf("\nSugar is available");
			available = 1;
			break;
		case 2:
			printf("\nTea is available");
			available = 1;
			break;
		case 3:
			printf("\nSalt is available");
			available = 1;
			break;
		default:
			printf("\nitem out of range");
			available = 0;
			break;
	}

	if(relmart)
	{
		if((item ==1) && (available==1))
		{

			printf("\nBought Sugar");

		}
		else if((item ==2) && (available==1))
		{

			printf("\nBought Tea");

		}
		else if((item ==3) && (available==1))
		{

			printf("\nBought Salt");

		}
		else
		{
			printf("\nYou havn't shopped anything");
		}

		printf(" from relmart\n");

	}
	else if(dmart)
	{
		if((item ==1) && (available==1))
		{

			printf("\nBought Sugar");

		}
		else if((item ==2) && (available==1))
		{

			printf("\nBought Tea");

		}
		else if((item ==3) && (available==1))
		{

			printf("\nBought Salt");

		}
		else
		{
			printf("\nYou havn't shopped anything");
		}

		printf(" from dmart\n");
	}
	else
	{
		//kmart
		if((item ==1) && (available==1))
		{

			printf("\nBought Sugar");

		}
		else if((item ==2) && (available==1))
		{

			printf("\nBought Tea");

		}
		else if((item ==3) && (available==1))
		{

			printf("\nBought Salt");

		}
		else
		{
			printf("\nYou havn't shopped anything");
		}

		printf(" from kmart\n");
	}

	printf("\n\ndone!\n\n");

	return 0;
}