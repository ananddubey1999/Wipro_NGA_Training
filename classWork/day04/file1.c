/*
	demo on formated io sts
*/
#include <stdio.h>
/*
int main()
{
	int x,y,z;
	printf("\nEnter the values of x,y,z\n");
	scanf("%2d%3d%1d",&x,&y,&z);
	printf("\nThe values scanned are: x=%5d y=%7d z=%3d",x,y,z);
	printf("\n\n");

	return 0;
}
*/

int main()
{
	char c;
	float f;
	int i;
	char str1[20];

	printf("\nEnter the integer value: ");
	scanf("%d",&i);

	printf("\nEnter the float value: ");
	scanf("%f",&f);
	

	printf("\nEnter the char value: ");
	scanf(" ");
	scanf("%c",&c);
	
	printf("\nEnter the string value: ");
	scanf("%s",str1);
	

	printf("\nThe values scanned are\n");
	printf("\n%d\n%f\n%c Ascii value=%d\n%s\n",i,f,c,c,str1);

	printf("\n\n");
	return 0;
}
