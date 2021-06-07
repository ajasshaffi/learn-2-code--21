
//Write a C Program to read an array, then display the array twice. Once using the index, and the other time using the array pointer.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100],i,n;
    int *ptr=a;

    /*printf("Enter the length of the array :);"*/
    scanf("%d",&n);
    /*printf("Enter the array elements :");*/
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("DISPLAYING USING INDEX: ");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\nDISPLAYING USING POINTERS: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}
