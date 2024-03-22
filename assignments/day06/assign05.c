#include <stdio.h>

int findEquilibrium(int arr[], int n){
    int total_sum = 0, left_sum = 0;
    int i;
    for(i = 0; i < n; i++){
        total_sum += arr[i];
    }

    for ( i = 0; i < n; i++)
    {
        total_sum -= arr[i];

        if (left_sum == total_sum)
        {
            return i;
        }
        left_sum += arr[i];
    }
    return -1;   
}

int main(){
    int n, i;
    printf("Enter the size of arr: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of arr: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int equilibrium_index = findEquilibrium(arr, n);

    if (equilibrium_index != -1)
    {
        printf("Equilibrium index found at index at %d\n", equilibrium_index);
    }
    else{
        printf("Equilibrium index not found\n");
    }

    return 0;
}