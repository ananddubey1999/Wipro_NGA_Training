/*
demo on arrays
*/

#include<stdio.h>
#define CAP 5

int main()
{
    int arr[CAP] = {0,};
    int Size, it;
    
    for(it=0;it<CAP;it++)
        arr[it] = it+1;
    
    //arr[0]=101;
    //arr[1]=102;

    
    printf("\nBase address of the array: %u",&arr[0]);
    printf("\naddress of arr[0] = %u and its value=%d",&arr[0],arr[0]);
    printf("\naddress of arr[1] = %u and its value=%d",&arr[1],arr[1]);
    printf("\naddress of arr[2] = %u and its value=%d",&arr[2],arr[2]);
    printf("\naddress of arr[3] = %u and its value=%d",&arr[3],arr[3]);
    printf("\naddress of arr[4] = %u and its value=%d",&arr[4],arr[4]);
    printf("\nSize of whole arr = %d",sizeof(arr));
    printf("\nSize of one element in arr=%d",sizeof(arr[0]));
    Size = sizeof(arr)/sizeof(arr[0]);
    printf("\nCapacity of the array = %d", Size);

    for(it=0;it<CAP;it++)
        printf("\n%d",arr[it]);



    printf("\n\n");
    return 0;
    
}