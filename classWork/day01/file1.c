/*
file to demo on arithmatic operators
*/

#include <stdio.h>

int main()
{
	int var1=100, var2=20;

	int result=0;

	//addition
	result = var1+var2;
	printf("\naddition of two number=%d",result);
	result = var1 - var2;
	printf("\nsub of two number=%d",result);
	result = var1 * var2;
	printf("\nmul of two number=%d",result);
	result = var1 / var2;
	printf("\ndiv of two number=%d",result);
	//modulus operator
	result = 3%5;
	printf("\nModulus of var1 mod var2= %d",result);

	printf("\n\n");

	return 0;

}