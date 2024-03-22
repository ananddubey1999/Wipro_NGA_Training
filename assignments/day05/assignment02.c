/*
    Problem Statement: Print Two's Table using Conditional statement or goto or label
*/

#include <stdio.h>

int main(){
    int num, i = 1;
    printf("Enter the Number which table you want to print:");
    scanf("%d", &num);
    printf("Two's Table:\n");
    start:
        printf("%d  X %d = %d\n", num, i, num * i);
        i++;
        if (i <= 10)
        {
            goto start;
        }
    return 0;
}   