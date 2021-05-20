//Write a C program to print the following number pattern
     555555
       4444
        333
         22
          1


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,i,j,n;

    /*printf("Enter the number of rows :");*/
    scanf("%d",&a);
    n=a;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("%d",a);
        }
        a=a-1;
        printf(" \n");
    }
    
    
    return 0;
}
