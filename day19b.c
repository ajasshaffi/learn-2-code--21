//Write a C program to find the number of words in a string. Also reverse string.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void count(char a[1000])
{
    int n=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ' && a[i+1]!=' ')
        {
            n++;
        }
    }
    printf("no of words = %d\n",n+1);
}
void reverse(char a[1000])
{
    int i,j,count=0;
    char rev[1000];
    while(a[count]!='\0')
    {
        count++;
    }
    j=count-1;
    for(i=0;i<count;i++)
    {
        rev[i]=a[j];
        j--;
    }
    printf("%s\n",rev);
        
}
int main() {
    char str[1000];

    /*printf("Enter the string :");*/
    fgets(str,1000,stdin);
    count(str);
    reverse(str);
    return 0;
}
