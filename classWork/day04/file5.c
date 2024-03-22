/*
R - stop
O - slow
G - move

light = green

sy:
if(cond1)
{
	st1
}
else if(cond2)
{
	st2
}
else if(cond3)
{
	st3
}
else
{
	default sts;
}
*/
#include <stdio.h>

int main()
{
	char clr;
	printf("\nEnter the color of the traffic light (R/O/G): ");
	clr = getc(stdin);

	if ((clr == 'R') || (clr == 'r'))
	{
		printf("\nStop the vechical ultil green light glows");
	}
	else if ((clr == 'O') || (clr == 'o'))
	{
		printf("\nStart the vechical and proceed");
	}
	else if((clr == 'G') || (clr == 'g'))
	{
		printf("\nDrive.......");
	}
	else
	{
		printf("\nTraffic lights are off.\nHence move slowly considering the flow of traffic\n");
	}

	printf("\nSpeed Kills\n\n");
	return 0;
}