//Write a C program to check whether a number present in the 1D array or not.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int array[10],a,b,i,temp=1;

    /*printf("Enter the size of the array : ");*/
    scanf("%d",&a);
    /*printf("Entrer the array elements");*/
    for(i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
    }
    /*printf("Enter the element to be searched :");*/
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        if(array[i]==b)
            {
               printf("%d",b);
               printf(" is present in this array");
               temp=temp+1;
               break;
            }
    }
    if(temp==1)
    {
        printf("%d",b);
        printf(" is not present in this array");
    }

    return 0;
}
