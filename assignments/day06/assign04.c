#include <stdio.h>


void subArrFindOrNot(int arr[], int n, int sum)
{
    int cur_sum = arr[0], start = 0, i;
    for ( i = 1; i <= n; i++)
    {
        while (cur_sum > sum && start < i-1)
        {
            cur_sum -= arr[start];
            start++;
        }

        if (cur_sum == sum){
            printf("Subarray found between index %d and %d\n", start, i-1);
            return;
        }
        if (i<n)
        {
            cur_sum += arr[i];
        } 
    }

    printf("No Subarray found\n");
}

int main(){
    int n, sum;
    printf("Enter the size of array");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum: ");
    scanf("%d", &sum);

    subArrFindOrNot(arr, n, sum);

    return 0;
}