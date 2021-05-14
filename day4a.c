//Write a C Program to verify if a given year is a leap year or no




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c,d;
    scanf("%d",&a);
    b=a%400;
    c=a%4;
    d=a%100;
    if(b==0)
        printf("Yes");
    else if (c==0)
    {
        if(d==0)
            printf("No");
        else
            printf("Yes");
    }
    else
        printf("No");
    return 0;
}
