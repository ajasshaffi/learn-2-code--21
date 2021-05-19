//Write a C Program to identify if a number is a palindrome or not.





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,reversed=0,remainder,orginal;

    /*printf("Enter the number :");*/
    scanf("%d",&a);
    orginal=a;
    while(a!=0)
    {
      remainder=a%10;
        reversed=reversed*10+remainder;
        a/=10;
    }
    if(orginal==reversed)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}
