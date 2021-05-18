/Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.

/




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    printf("1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    /*printf("Enter the option number :");*/
    scanf("%d",&a);
    /*printf("Enter the the numbers :");*/
    scanf("%d%d",&b,&c);
    switch(a)
    {
        case 1: printf("\n%d",b+c);
            break;
        case 2: printf("\n%d",b-c);
            break;
        case 3: printf("\n%d",b*c);
            break;
        case 4:
            if(c==0)
            {
                printf("\nCannot be determined");
            }
            else
            {    
            printf("\n%.1f",(float)b/(float)c);
            }
            break;
        default:
            {
                printf("\nEnter avalid option number");
                break;
            }
    }
    return 0;
}
