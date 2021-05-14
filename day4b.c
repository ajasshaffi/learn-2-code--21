//Write a C Program to find the maximum and minimum from three user inputted numbers.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1,num2,num3;
   /* printf("Enter the three numbers :");*/
    scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2 && num1>num3)
    {
        printf("%d",num1);
    }
    else if(num2>num3)
    {
        printf("%d",num2);
    }
    else
    {
        printf("%d",num3);
    }
if(num1<num2 && num1<num3)
    {
        printf("\n%d",num1);
    }
    else if(num2<num3)
    {
        printf("\n%d",num2);
    }
    else
    {
        printf("\n%d",num3);
    }
    return 0;
}
