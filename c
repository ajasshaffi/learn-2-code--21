

Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a;
    int b;
    float c;
    double d;
    scanf("%c",&a);
    printf("%c \n",a);
    scanf("%d",&b);
    printf("%d \n",b);
    scanf("%f",&c);
    printf("%f \n", c);
    scanf("%lf \n",&d);
    printf("%lf \n",d);
    
    return 0;
}
