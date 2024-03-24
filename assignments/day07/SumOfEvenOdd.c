#include <stdio.h>

void displayOddSum(int oddSum); 
void displayEvenSum(int evenSum);
void sumEvenOdd(int array[], int size); 

// Function to perform summation of Even and Odd numbers separately
void sumEvenOdd(int array[], int size) {
    int i;
    int evenSum = 0, oddSum = 0;
    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            evenSum += array[i];
        } else {
            oddSum += array[i];
        }
    }
    displayEvenSum(evenSum);
    displayOddSum(oddSum);
}

// Displays the sum of odd numbers
void displayOddSum(int oddSum) {
    printf("Sum of odd values: %d\n", oddSum);
}

// Displays the sum of even numbers
void displayEvenSum(int evenSum) {
    printf("Sum of even values: %d\n", evenSum);
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

    sumEvenOdd(array, size);

    return 0;
}
