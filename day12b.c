//Write a C program to find the frequency of odd and even numbers in the 1D array.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,array[10],i,n=0,p=0;

    /*printf("Enter the number of elements in the array");*/
    scanf("%d",&a);
    /*printf("Enter the elements of the array :");*/
    for(i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
        if (array[i]%2==0)
        {
            n=n+1;
        }
        else if(array[i]%2!=0)
        {
            p=p+1;
        }
    }
    printf("%d",n);
    printf("\n%d",p);
    return 0;
}
