//Write a C program to count and display the number of Vowels, Consonants and spaces in a string


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,vowels=0,consonants=0,space=0;
    char str[100];

    /*printf("Enter the string :");*/
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            ++vowels;
        }
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!=' ')
        {
            consonants++;
        }
        if(str[i]==' ')
        {
            space++;
        }
    }
    printf("%d\n",vowels);
    printf("%d\n",consonants);
    printf("%d",space);
    return 0;
}
