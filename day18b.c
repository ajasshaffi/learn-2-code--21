
//Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void rev(int sum)
{
    int rev=0,rem=0;
    while(sum!=0)
    {
        rem=sum%10;
        rev=rev * 10+rem;
        sum=sum/10;
    }
    printf("%d",rev);
}
void prime( int sum)
{
    int temp=0,i;
    for(i=2;i<sum/2;i++)
    {
        if(sum%i==0)
        {
            printf("Not prime");
            temp=1;
            break;
        }
    }
    if(temp==0)
    {
        printf("Prime");
    }
}

int main() {
    int a,b,sum;

    /*printf("Enter the numbers :");*/
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d\n",sum);
    if(sum%2==0)
    {
      rev(sum);  
    }
    else{
        prime(sum);
        
    }
    
