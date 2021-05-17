//WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a,b,c;
    float n;
    /*printf("Enter the marks :");*/
    scanf("%d%d%d",&a,&b,&c);
    n=(a+b+c)/3.0;
    printf("%.2f",n);
    if (n>=90)
    {
        printf("\nA");
    }
    else if(n>=80)
    {
        printf("\nB");
    }
    else if(n>=70)
    {
        printf("\nC");
    }
    else if(n>=60)
    {
        printf("\nD");
    }
    else if (n>=50)
    {
        printf("\nE");
    }
    else 
        printf("\nF");
    
    
    return 0;
}
