/*
Q7: Isha is playing with numbers and trying to write program to Check if the sum of distinct digits of two integers are equal

Output Format:
If  the sum of distinct digits of both the numbers are equal
if true        print YES
otherwise  print NO.

Examples:
Input:
 2452
 9222
Output:
 YES

Input
121
3035
Output:
 NO
*/


#include <stdio.h>

int sumOfDistinctDigits(int num) {
    int sum = 0;
    int digitFreq[10] = {0}; 

    while (num != 0) {
        int digit = num % 10;
        digitFreq[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digitFreq[i] > 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int sum1 = sumOfDistinctDigits(num1);
    int sum2 = sumOfDistinctDigits(num2);

    if (sum1 == sum2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
