#include <stdio.h>

int main(){
    int i=1;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);


    while (1)
    {
        printf("%d x %d = %d\n", n, i, (n*i));
        i++;
        if(i > 10 ){
            break;
        }
    }

    printf("\n\nDone!\n\n");
    return 0;
}