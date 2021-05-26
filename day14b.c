//Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10][10],r,c,i,j;

    /*printf("Enter the no of rows");*/
    scanf("%d",&r);
    /*printf("Enter the no of columns");*/
    scanf("%d",&c);
    /*printf("Enter the array elements :"):*/
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            /*printf("Enter the values for a[%d][%d] :\n"i,j);*/
            scanf("%d",&a[i][j]);
        }
    }
    if(r!=c)
    {
        printf("ERROR");
    }
    else
    {
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if (i==j)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=c-1;j>=0;j--)
        {
                if((i+j)==(r-1))
                {
                 printf("%d ",a[i][j]);
                }
        }
    }
    }
    return 0;
}
