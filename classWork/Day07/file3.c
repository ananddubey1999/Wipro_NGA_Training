/*
    write a program for calculate factorial of a number. Number is given by user

    
*/

#include <stdio.h>

// Declaration of Factorial function
int factFun(int);

// Main function start here...
int main()
{   
    int n;
    // get number from user
    printf("Enter a Number which factorial you find: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %d\n",n, factFun(n));   // function calling here
    return 0;
}


// Define factorial function
int factFun(int n){
    if (n==0 || n==1){
        return 1;
    }
    else
    {
        return n * factFun(n-1);
    }
}