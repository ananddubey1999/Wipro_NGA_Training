/*
demo on bitwise operators

*/

#include <stdio.h>

int main()
{
	short int val1=5;
	short int val2 = 10;
	long long int res=0;

	res = val1 & val2;

	/*
	val = 5, 0101

	00000000 00000000 00000000 00000101
	00000000 00000000 00000000 00001010
	

	0101 << 1
	1010 => 10

	*/
	printf("\nres=%lld\n",res);
	return 0;
}