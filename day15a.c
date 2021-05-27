//Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10][10],r,c,i,j,n,temp=0;

    /*printf("Enter the no of rows :");*/
    scanf("%d",&r);
    /*printf("Enter the no of columns :");*/
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            /*printf("Enter the values for a[%d][%d] :\n"i,j);*/
            scanf("%d",&a[i][j]);
        }
    }
    /*printf("Enter the no to be searched");*/
    scanf("%d",&n);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==n)
            {
                printf("Element found at (%d,%d)",i,j);
                printf("\n");
                temp=temp+1;
            }
        }
    }
    if(temp==0)
    {
        printf("Element not found");
    }
    return 0;
}
