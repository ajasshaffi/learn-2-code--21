//Write a C Program to determine the factorial of a number.




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,f=1;

    /*printf("Enter the number :");*/
    scanf("%d",&n);
    if(n<0)
        printf("ERROR");
    else
    {
        for(i=1;i<=n;i++)
            f=f*i;
        printf("%d",f);
    }
    return 0;
}
