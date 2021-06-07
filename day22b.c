//Write a C program that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct student
{
    int RollNo;
    char FristName[200];
    float marks;
}s[4];

int main() {
    int i;
    /*printf("Enter the informations of students :");*/
    for(i=0;i<4;i++)
    {
        /*printf("Details of roll no :",);*/
        scanf("%d",&s[i].RollNo);
        /*printf("Name :");*/
        scanf("%s",&s[i].FristName);
        /*printf("Marks :");*/
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<4;i++)
    {
    if(s[i].RollNo>0 && s[i].RollNo<=100 && s[i].marks>0.00 && s[i].marks<=100.00)
    {
        printf("DETAILS OF ROLLNO %d\n",s[i].RollNo);
        printf("NAME: %s\n",s[i].FristName);
        printf("MARKS: %.2f\n",s[i].marks);
    }
    }
    return 0;
}
