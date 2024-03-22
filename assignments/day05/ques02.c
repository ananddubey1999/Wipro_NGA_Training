/*
Q2:
Language:
C
Problem
statement : Write the logic to print Number Star Right Triangle pattern.
Input
Format      : Take N as input of type
integer.
Output
Format     : Print Number Star Right
Triangle pattern.

Constraints:
2<=N<=10

Sample Input:
5
Sample Output:
1
2*3
4*5*6
7*8*9*10
11*12*13*14*15
*/


#include <stdio.h>

void starRightTrianglePattern(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num++);
            if (j != i)
                printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (n < 2 || n > 10) {
        printf("Invalid input! n\n");
        return 1;
    }

    starRightTrianglePattern(n);

    return 0;
}