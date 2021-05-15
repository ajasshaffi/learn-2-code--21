//In a sequence of numbers from 1 - 100, replace the numbers divisble by 3 with "FIZZ", replace the numbers divisble by 5 with "BUZZ" and replace the numbers divisble by 15 with "FIZZBUZZ" and print the result.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a;
    for(a=1;a<=100;a++)
        if(a%15==0)
        printf("FIZZBUZZ ");
         else if(a%5==0)
         {
          printf("BUZZ ");
          }
           else if(a%3==0)
            {
             printf("FIZZ ");
            }
            else
            printf("%d ",a);
    return 0;
}
