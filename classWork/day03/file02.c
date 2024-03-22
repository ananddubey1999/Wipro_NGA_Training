/*
    syntax:
    for(init sec; conditon sec; counter section(++/--))
    {
        //body of the for loop
    }
*/


#include <stdio.h>

int main(){
    int i=1;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Enter a value of iteration start from (i):");
    scanf("%d", &i);

    for (i; i<=10; i++)
    {
        printf("%d x %d = %d\n", n, i, (n*i));
   
    }

    printf("\n\nDone!\n\n");
    return 0;

}