/*
    Sort the element in decreasing order of the given list
*/


#include <stdio.h>

void sortElementOfList(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
        
    }
    
}


int main(){
    int arr[] = {12,33,42,11,2,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\nOriginal List: \n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    sortElementOfList(arr, n);
    printf("\nSorted List: \n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    return 0;   
}