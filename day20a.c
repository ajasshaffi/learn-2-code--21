//Write a C program to find the factorial of a given number using a recursive function



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int factorial(int n)
{
   if(n==0)
   {
       return (1);
   }
    return(n*factorial(n-1));
}

int main() {
    int a,fact;

    /*printf("Enter the number :"); */
    scanf("%d",&a);
    if(a<0)
    {
        printf("ERROR");
    }
    else
    {
        fact=factorial(a);
        printf("%d",fact);
    }
    return 0;
}
