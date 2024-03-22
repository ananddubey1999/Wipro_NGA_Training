#include <stdio.h>

int printFact(int n) {
    if (n == 0) {
        return 1; // Base case
    }
    int facto = n * printFact(n - 1);
    return facto;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int facto = printFact(n);

    printf("Factorial of %d is %d\n", n, facto);

    return 0;
}
