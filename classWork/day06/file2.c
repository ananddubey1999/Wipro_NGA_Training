#include <stdio.h>

extern int CAP;

int main()
{
	int arr[CAP];

	int i;

	for(i=0;i<CAP;i++)
		arr[i]=i+2;
	
	printf("\nArray elements are\n");


	for(i=0;i<CAP;i++)
		printf("%d\t",arr[i]);

	printf("\n\n");
	return 0;
}
	
