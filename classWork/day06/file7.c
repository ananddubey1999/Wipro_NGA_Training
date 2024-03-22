/*
2D array
sy:
dt arrName[CAP_R][CAP_C];

1       2       3
0,0     0,1     0,2
4       5       6
1,0     1,1     1,2
7       8       9
2,0     2,1     2,2

int arr[5][2];
1 6
2 7
3 8
4 9
5 0

int arr[3][3] = {1,2,3,4,5,6,7,8,9};
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

pf("%d",arr[2][2]);

*/

#include <stdio.h>

#define CAP_R 3
#define CAP_C 3

int main()
{
    int itr,itc;
    int START = 0;
    int arr[CAP_R][CAP_C];
    printf("\nEnter the %d no of elements of array",CAP_R*CAP_C);
    for(itr=START;itr<CAP_R;itr++)
    {
        for (itc = START; itc < CAP_C; itc++)
        {
            scanf("%d",&arr[itr][itc]);
        }
        
    }

    printf("\nList of array elements are\n");
    for(itr=START;itr<CAP_R;itr++)
    {
        for(itc=START;itc<CAP_C;itc++)
        {
            printf("%d\t",arr[itr][itc]);
        }
        printf("\n");
    } 

    printf("\n\n");
    return 0;
}