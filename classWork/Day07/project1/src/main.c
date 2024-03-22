#include <stdio.h>
#include <simpleClac.h>


int main()
{
    int v1,v2;
    int result=0;
    int c;

    banner();
    c = dispMenu();
    printf("\nEnter the two values: ");
    scanf("%d%d",&v1,&v2);
    // switch (dispMenu())
    switch(c)
    {
        case 1:
            result = addition(v1,v2);
            printf("\nAdditon of %d + %d = %d",v1,v2,result);
            print_dots(41,'*');
            break;

        case 2:
            result = sub(v1,v2);
            printf("\nSub of %d - %d = %d",v1,v2,result);
            print_dots(41,'*');
            break;
        
        case 3:
            result = mul(v1,v2);
            printf("\nMultiplication of %d * %d = %d",v1,v2,result);
            print_dots(41,'*');
            break;

        case 4:
            result = div(v1,v2);
            printf("\nDivision of %d / %d = %d",v1,v2,result);
            print_dots(41,'*');
            break;
        
        case 5:
            result = mod(v1,v2);
            printf("\nMod of %d %% %d = %d",v1,v2,result);
            print_dots(41,'*');
            break;
            
        default:
            printf("\nEnter the correct choice\n");
            break;
    }
    
    printf("\n\n");
    return 0;

}