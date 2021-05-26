//Write a C Program to read a 2D Array and then display it.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10][10],r,c,i,j;

    /*printf("Enter the no of rows :");*/
    scanf("%d",&r);
    /*printf("Enter the no columns :");*/
    scanf("%d",&c);
    /*printf("Enter the array elements");*/
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
  
 
    return 0;
}
