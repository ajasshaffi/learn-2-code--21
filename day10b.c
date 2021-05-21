//Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b,c,determinant,root1,root2,realpart,imgpart;

    /*printf("Enter the coefficients :");*/
    scanf("%f%f%f", &a, &b, &c);
    determinant=(b*b)-(4*a*c);
    if(determinant>0)
    {
        root1=(-b+sqrt(determinant))/(2*a);
        root2=(-b-sqrt(determinant))/(2*a);
        printf("Distinct Real : %.2f , %.2f",root1,root2);
    }
    else if(determinant==0)
    {
        root1=(-b/(2*a));
        root2=(-b/(2*a));
        printf("Equal Real: %.2f , %.2f",root1,root2);
    }
    else
    {
        realpart=(-b/(float)(2*a));
        imgpart=sqrt(-determinant)/(2*a);
        printf("Complex: %.2f + i%.2f , %.2f - i%.2f",realpart,imgpart,realpart,imgpart);
    }
          
    return 0;
}
