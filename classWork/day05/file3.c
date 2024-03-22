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
    int it = 11;
    int tab;
    printf("\nEnter the number: ");
    scanf("%d", &tab);
    do
    {
        printf("\n%d x %d = %d", tab, it, (tab * it));
        it++;
    } while (it <= 10);

    printf("\n\nDone!\n\n");
    return 0;
}