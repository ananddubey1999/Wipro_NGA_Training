#include <stdio.h>

void displayEvenPosSum(int evenPosSum);
void displayOddPosSum(int oddPosSum);
void sumEvenOddPos(int array[], int size);

void sumEvenOddPos(int array[], int size) {
    int i;
    int evenPosSum = 0, oddPosSum = 0;
    for (i = 0; i < size; i++) {
        if (i % 2 == 0) { // Even position
            evenPosSum += array[i];
        } else { // Odd position
            oddPosSum += array[i];
        }
    }
    displayEvenPosSum(evenPosSum);
    displayOddPosSum(oddPosSum);
}

void displayEvenPosSum(int evenPosSum) {
    printf("Sum of values at even positions: %d\n", evenPosSum);
}

void displayOddPosSum(int oddPosSum) {
    printf("Sum of values at odd positions: %d\n", oddPosSum);
}


int main() {
    int i, size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    printf("\nEnter the elements up to %d: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    sumEvenOddPos(array, size);

    return 0;
}
