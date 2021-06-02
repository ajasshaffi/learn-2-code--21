//Write a C program to check whether a given number is amstrong or not.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void amstrog(int a)
{
    int num=0,sum=0,temp=0;
    temp=a;
    while(a!=0)
    {
        num=a%10;
        sum=sum+num*num*num;
        a=a/10;
    }
    if(sum==temp)
    {
        printf("Amstrong");
    }
    else
        printf("Not Amstrong");
}

int main() {
    int n;

    /*printf("Enter the number :");*/
    scanf("%d",&n);
    amstrog(n);
    return 0;
}
