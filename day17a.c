//Write a C program to print half pyramid of numbers


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,j;

    /*printf("Enter the no of rows :");*/
    scanf("%d",&n);
    if(n<1)
    {
        printf("ERROR");
    }
    else
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    }
    return 0;
}
