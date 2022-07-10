#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int Roll_No;
    char SName[24];
    float Per;
    char Course[8];
    char Grade;
};
int main()
{
    struct student S1={21,"Amey Waagh",56.222,"Artist",'A'};

    printf("\n\n\t Given Student Details => \n");

    getch();

    printf("\n Roll No      : %d",S1.Roll_No);
    printf("\n Student Name : %s",S1.SName);
    printf("\n Percentage   : %0.2f",S1.Per);
    printf("\n Course       : %s",S1.Course);
    printf("\n Grade        : %c",S1.Grade);

    getch();
    return 0;
}

