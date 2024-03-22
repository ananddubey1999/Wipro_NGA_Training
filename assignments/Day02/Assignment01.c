#include <stdio.h>

int main() {

    char name[50];

    int roll_number, age;

    float marks1, marks2, marks3;

    printf("Enter name of student: ");
    scanf("%[^\n]", name);

    printf("Enter roll number: ");
    scanf("%d", &roll_number);

    printf("Enter age of the student: ");
    scanf("%d", &age);

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    printf("\nDetails of the student:\n");

    printf("Name: %s\n", name);

    printf("Roll Number: %d\n", roll_number);

    printf("Age: %d\n", age);

    printf("Marks in Subject 1: %.2f\n", marks1);

    printf("Marks in Subject 2: %.2f\n", marks2);

    printf("Marks in Subject 3: %.2f\n", marks3);

    return 0;
}