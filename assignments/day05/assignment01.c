/*
Problem Statement: Write a C program to fined the greatest among three numbers using If - Else Leader(Nested)
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d is the greatest.\n", num1);
        } else {
            printf("%d is the greatest.\n", num3);
        }
    } else {
        if (num2 > num3) {
            printf("%d is the greatest.\n", num2);
        } else {
            printf("%d is the greatest.\n", num3);
        }
    }

    return 0;
}

