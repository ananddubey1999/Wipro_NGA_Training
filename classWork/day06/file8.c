/*

arr[10] = {1,2,3,4,5,6,7,8,9,10}
gNum = 9

a[0]+a[1]+a[2]+a[3]
1+2+3+4 = 10
a[1]+a[2]+a[3]
2+3+4 = 9
sub arr foud bt 1st to 3rd index
*/
#include <stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int gNum=0;
    int i,j;
    int Sum=0;
    int flagC=0;

    for(i=0;i<10;i++)
    {
        Sum = 0;
        for(j=i;j<10;j++)
        {
            Sum += arr[j];
            if(Sum ==gNum)
            {
                flagC=1;
                break;
            }
        }
        if(flagC == 1)
            break;
    }
    if(flagC==1)
        printf("\n%d\t%d",i,j);
    else
        printf("\nNot Found\n");
    
    printf("\n\n");
}