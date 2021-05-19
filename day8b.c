//Write a C Program to compute the multiplication table of 1 - 5 using do-while.







#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i;
do
{
    printf("\n1.Table of 1");
    printf("\n2.Table of 2");
    printf("\n3.Table of 3");
    printf("\n4.Table of 4");
    printf("\n5.Table of 5");
    printf("\n6.Exit\n");
    /*printf("Enter the option number");*/
    scanf("%d",&a);
    if(a<6)
    {
        for(i=1;i<=10;i++)
            printf("%d ",a*i);
    }
    else if (a>6)
    {
        printf("Enter a valid option!");
    }
}
    while(a!=6);
    return 0;
}
