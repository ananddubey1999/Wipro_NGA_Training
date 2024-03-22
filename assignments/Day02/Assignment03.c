#include <stdio.h>

int main() {
    char clr;

    printf("\nEnter the color of the traffic light (R/O/G): ");
    clr = getchar();

    if (clr == 'R' || clr == 'r') {
        printf("\nStop the vehicle until the green light glows\n");
    } else if (clr == 'O' || clr == 'o') {
        printf("\nProceed with caution\n");
    } else if (clr == 'G' || clr == 'g') {
        printf("\nDrive...\n");
    } else {
        printf("\nTraffic lights are off. Hence move slowly considering speed kills\n");
    }

    return 0;
}