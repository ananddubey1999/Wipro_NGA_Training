/*
demo on switch
*/

#include <stdio.h>

int main()
{
	char clr;

	printf("\nEnter the color of the traffic light (R/O/G): ");
	clr = getc(stdin);

	switch(clr)
	{
		default:
			printf("\nTraffic lights are off.\nHence move slowly considering the flow of traffic\n");
			break;
		case 65:
			printf("RED");
			break; 
		case 'A'+17:
		case 'r':
			printf("\nStop the vechical ultil green light glows");
			break;
		case 'O':
		case 'o':
			printf("\nStart the vechical and proceed");
			break;
		case 'G':
		case 'g':
			printf("\nDrive.......");
			break;
		

	}

	printf("\nSpeed Kills\n\n");

	printf("\n\n");
	return 0;
}