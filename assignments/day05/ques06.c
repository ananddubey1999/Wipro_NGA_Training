/*  
Q6: Program to Check if product of digits of a number at even and odd places is equal.
Input:

2841
Output:
 Yes

Input:

4324
Output:
No
*/



#include <stdio.h>

int productOfDigits(int num) {
    int product = 1;

    while (num != 0) {
        product *= num % 10;
        num /= 10;
    }

    return product;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int evenPlaceProduct = 1;
    int oddPlaceProduct = 1;
    int position = 1;

    while (number != 0) {
        if (position % 2 == 0) {
            evenPlaceProduct *= number % 10;
        } else {
            oddPlaceProduct *= number % 10;
        }
        number /= 10;
        position++;
    }

    if (evenPlaceProduct == oddPlaceProduct) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
