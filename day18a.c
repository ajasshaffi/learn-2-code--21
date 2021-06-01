
//Write a C program to swap the values of two variables.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    void swap(int c,int d)
    {
        int temp;
        temp=c;
        c=d;
        d=temp;
        printf("a=%d ",c);
        printf("b=%d",d);
    }
int main(){
    int a,b;
    /*printf("Enter the two numbers :");*/
    scanf("%d%d",&a,&b);
    printf("a=%d ",a);
    printf("b=%d\n",b);
    swap (a,b);
    return 0;
}
