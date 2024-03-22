/*
demo on inc and dec operators
*/

#include <stdio.h>

int main()
{
	int a=10,b=20;
	int c;

	c = ++a; 
	b = a++; 
	printf("\n%d %d %d",a++,++b,c++); //12, 12, 11
	//13 12 12
	printf("\n%d %d %d",a++,b--,--c); // 13, 12 11

	printf("\n%d %d %d\n",a,b,c);

	return 0;
}