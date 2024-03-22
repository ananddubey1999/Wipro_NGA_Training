/*
demo on conditional or ternary op
sy:

(exp)?op1:op2;

biggest of 3 numbers

*/


#include <stdio.h>

struct student
{
	int id;
	char name[20];
}s1;


int func(int val)
{
	return (val);
}


int main()
{
	int x=101,y=20,z=301;
	int res=0;


	res = (x>y)?((x>z)?(x):(z)):((y>z)?(y):(z));

	printf("\nres=%d\n",res);

	printf("\n%d\n",sizeof(++res));

	printf("\nres = %d\n",res);
	return 0;
}