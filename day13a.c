//Write a program in C to Find the Frequency of Characters.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100],ch;
    int i,temp;

    /*printf("Enter the sentence :");*/
    gets(str);
    /*printf("Enter the the character");*/
    scanf("%c",&ch);
    temp=0;
    for(i=0;str[i]!= '\0';i++)
    {
        if(str[i]==ch)
        {
            temp=temp+1;
        }
    }
    printf("%d",temp);
    
    return 0;
}
