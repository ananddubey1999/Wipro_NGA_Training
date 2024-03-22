#include <stdio.h>


void findLeadersInList(int arr[], int n){
    int right_max = arr[n-1], i;
    printf("%d", right_max);

    for ( i = n-2 ; i >= 0; i--)
    {
        if( arr[i] > right_max){
            right_max = arr[i];
            printf("%d", right_max);
        } 
    }
}


int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Leaders in the array: ");
    findLeadersInList(arr, n);
    printf("\n\n");
    return 0;
}