#include <stdio.h>

int main()
{
    int arr[7] = {-7,1,5,2,-4,3,1};
    int i,j,k;
    int sumR=0,sumL=0;

    for(i=0;i<7;i++)
    {
        for(sumL=0,j=0;j<i;j++)
        {
            //left sum
            sumL+=arr[j];
        }
        for(sumR=0,k=i+1;k<7;k++)
        {
            sumR+=arr[k];
        }
        printf("\nSumL = %d\tSumR=%d",sumL,sumR);
        if(sumL==sumR)
        {
            break;
        }
    }
    printf("\narr[%d] = %d is eq\n",i,arr[i]);

    printf("\n\n");
    return 0;
}