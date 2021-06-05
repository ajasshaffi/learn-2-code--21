//Write a C program to find the second maximum element in an array of integer elements


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[3000],n,i,j,temp=0,max=0;

    /*printf("Enter the size of array :);"*/
    scanf("%d",&n);
    /*printf("Enter the array elements :");*/
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n>2 && n<=100 && a[i]>=-100 && a[i]<=100)
    {
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    }
    max=a[n-1];
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<max)
        {
            printf("%d",a[i]);
            break;
        }
    }
    return 0;
}
