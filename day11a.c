//Write a C program to read n values from the user and store it in the array. Reprint the values stored in the array and also print the value of second element in the array.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numbers[10],i,a;

    /*printf("Enter the numbers of value :");*/
    scanf("%d",&a);
    /*printf("Enter the elements :");*/
    for(i=0;i<=a-1;i++)
    {
        scanf("%d",&numbers[i]);
 
    }
    printf("Entered array:");
    for(i=0;i<=a-1;i++)
    {
        printf(" %d",numbers[i]);
    }
        printf("\n%d",numbers[1]);
    
    return 0;
}
