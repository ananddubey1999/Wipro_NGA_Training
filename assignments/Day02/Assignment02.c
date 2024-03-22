#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "password123";
    char input[20];
    int authenticated = 0;

    printf("\nEnter the password: ");
    scanf("%s", input);

    if (strcmp(password, input) == 0) {
        authenticated = 1;
        printf("\nYou have been successfully authenticated.\n");
    } else {
        printf("\nInvalid password. Authentication failed.\n");
    }

    if (authenticated) {
        printf("Access granted. Welcome to the system.\n");
    } else {
        printf("Access denied. Please try again later.\n");
    }

    return 0;
}