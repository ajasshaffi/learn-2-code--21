//Write a C Program to compute the multiplication table of 1 - 5 using do-while.







#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,i;
        /*printf("Enter the option number :");*/
    scanf("%d",&a);
    /*printf("Enter the next option number :");*/
    scanf("%d",&b);
        do
        {
            printf("\n1.Table of 1");
            printf("\n2.Table of 2");
            printf("\n3.Table of 3");
            printf("\n4.Table of 4");
            printf("\n5.Table of 5");
            printf("\n6.Exit\n");
            if(a<6)
            {
            for(i=1;i<=10;i++)
                printf("%d ",a*i);
            }
            else
            {
                printf("Enter a valid option!");
            }
        }
         while(b!=6);
    {
        printf("\n1.Table of 1");
        printf("\n2.Table of 2");
        printf("\n3.Table of 3");
        printf("\n4.Table of 4");
        printf("\n5.Table of 5");
        printf("\n6.Exit");
    }
    return 0;
}
