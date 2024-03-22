/*
    Find the least number in the given list.
*/
#include <stdio.h>
int gretestEleInList(int arr[], int arr_size)
{
    int max = arr[0];    //store the first element as max ele.
    for(int i=0; i<arr_size; i++){
        if(arr[i] > max){                  // check current ele is match with max
            max = arr[i];               
        }
    }
    return max;
}

int main(){
    int arr[5] = {1,3,5,6,3};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("\nGreatest Number in given list:%d\n",gretestEleInList(arr,arr_size));
    return 0;
}