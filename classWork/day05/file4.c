#include <stdio.h>

int main()
{
    int it = 11;
    int tab;
    printf("\nEnter the number: ");
    scanf("%d", &tab);
    while (1)
    {
        printf("\n%d x %d = %d", tab, it, (tab * it));
        it++;
        if (it > 10)
            break;
    }

    printf("\n\nDone!\n\n");
    return 0;
}