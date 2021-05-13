//Write a C Program to convert Fahrenheit to Celsius.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float t;
    /*printf("Enter the temperature :");*/
    scanf("%f",&t);
    printf("%.2f",(t-32)*(5/(float)9));
    return 0;
}
