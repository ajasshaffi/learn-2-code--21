
//Write a C program to find the number of prime numbers in a array of integers


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10],n,i=0,temp,b=0,m,j;

    /*printf("Enter the size of the atrray :")*/
    scanf("%d",&n);
    /*printf("Enter the array elements :");*/
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=a[i]/2;
        temp=0;
        for(j=2;j<=m;j++)
        {
            if(a[i]%j==0)
            {
                temp++;
                break;
            }
        }
        if(temp==0)
            b++;
    }
    printf("%d",b);
    return 0;
}
