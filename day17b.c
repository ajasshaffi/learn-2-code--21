
//Write a C program to print inverted full pyramid of *

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,k,space;

    /*printf("Enter the no of array :");*/
    scanf("%d",&n);
    if(n<1)
    {
        printf("ERROR");
    }
    else
    {
        for(i=n;i>=1;i--)
        {
            for(space=0;space<n-i;space++)
            {
                printf("  ");
            }
            for(k=i;k<=2*i-1;k++)
            {
                printf("* ");
            }
            for(j=0;j<i-1;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
