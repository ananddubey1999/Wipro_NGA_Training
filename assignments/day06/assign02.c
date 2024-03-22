/*
    Find the least number in the given list.
*/

#include <stdio.h>
#define CAP
int leastEleInList(int arr[], int arr_size)
{
    int min = arr[0];
    int i;
    for(i=0; i<arr_size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[5] = {1,3,5,6,3};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("\nLeast Number in given list:%d\n",leastEleInList(arr,arr_size));
    return 0;
}