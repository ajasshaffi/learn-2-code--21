//Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double r,h,b;
    int a;
    /*printf("Enter the side of the circle :");*/
    scanf("%d",&a);
     printf("%d",a*a);
    /*printf("Enter the radius of the circle :");*/
    scanf("%lf",&r);
    printf("\n%.1lf",(float)3.14*r*r);
    /*printf("Enter the height of the triangle :");*/
    scanf("%lf",&h);
    /*printf("Enter the base of the triangle :");*/
    scanf("%lf",&b),
    printf("\n%.2lf",(float)0.5*b*h);
    
    return 0;
}
