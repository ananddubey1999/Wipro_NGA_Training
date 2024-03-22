/*

demo on logical, relational, equality
operators

*/

#include <stdio.h>

int main()
{
	int v1,v2,v3,v4;
	
	printf("\nEnter the values of v1,v2,v3 and v4: ");
	scanf("%d%d%d%d",&v1,&v2,&v3,&v4);
	/*
	//demo for the address of the variables
	printf("\nAddress of v1=%u and its value=%d",&v1,v1);
	printf("\nAddress of v2=%u and its value=%d",&v2,v2);
	printf("\nAddress of v3=%u and its value=%d",&v3,v3);
	printf("\nAddress of v4=%u and its value=%d",&v4,v4);
	*/

	printf("\nEquality Operation: %d",(v1==v2));
	printf("\nGreater than Op: %d",(v3>v4));
	printf("\nLesser than Op: %d",(v4<v3));
	printf("\nGreater than or Equal to Op: %d",(v1>=v3));
	printf("\nLesser than or Equal to Op: %d",(v2<=v4));

	//demo on logical operators

	printf("\nLogical AND Operation: %d",(v1==v2)&&(v1>=v3)&&(v4>v3));
	printf("\nLogical OR Operation: %d",(v1==v2)||(v1>=v3)||(v4>v3));
	printf("\nLogical Not Operation: %d",!(v1<v2));
	
	
	


	printf("\n\n");
	return 0;
}