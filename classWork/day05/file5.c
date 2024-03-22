/*

sy:

for(init sec; cond sec; counter sec)
{
    body of the loop
}

*/

/*
demo on exit controlled looping st
sy:

do{
    body of the loop
}while(cond);

*/
#include <stdio.h>

int main()
{
    int it, j;
    int tab;
    // printf("\nEnter the number: ");
    // scanf("%d", &tab);

    for (it = 1, j = 10, tab = 8; (tab * it) <= 800; it++, j += 2)
    {

        printf("\n%d x %d = %d\tj=%d", tab, it, (tab * it), j);
    }

    printf("\n\nDone!\n\n");
    return 0;
}