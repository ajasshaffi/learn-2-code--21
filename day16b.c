
//Write a C program to find the minimum and maximum element of an array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100],i,n,min,max;

    /*printf("Enter the size of array :");*/
    scanf("%d",&n);
    /*printf("Enter the array elements :%d"i):*/
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        else if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d\n",min);
    printf("%d",max);
    return 0;
}
