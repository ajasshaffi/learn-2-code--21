//Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10][10],b[10][10],r,c,r2,c2,i,j,m[10][10],sum=0,k;

    /*printf("Enter the order of frist array :");*/
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            /*printf("Enter the elements of frist array a[%d][%d] :"i,j);*/
            scanf("%d",&a[i][j]);
        }
    }
    /*printf("Enter the order second array");*/
    scanf("%d%d",&r2,&c2);
    if(c!=r2)
    {
        printf("ERROR");
    }
    else
    {
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            /*printf("Enter the elements of second array b[%d][%d] :"i,j);*/
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            {
                sum +=a[i][k] * b[k][j];
            }
            m[i][j]=sum;
            sum=0;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    }
    
    return 0;
}
