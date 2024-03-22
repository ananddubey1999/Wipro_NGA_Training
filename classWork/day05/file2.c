
/*
looping
require 4 steps

1. initialize the variables/counters
2. block of statements to be executed repeatedly
3. counter
4. condition

*/

/*
    while(cond)
    {
        body of the loop
    }

*/

#include <stdio.h>

int main()
{
    int it = 11;
    while (it <= 10)
    {
        printf("\nit = %d", it);
        it++;
    }
    printf("\n\nDone!\n\n");
    return 0;
}