#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student
{
    int Roll_No;
    char SName[24];
    float Per;
    char Course[16];
    char Grade;
};

int main()
{
    struct Student Std1;

    Std1.Roll_No = 15;
    strcpy( Std1.SName,"POONAM NITIN");
    Std1.Per = 56.7243;
    strcpy( Std1.Course,"MSC");
    Std1.Grade = 'A';

    printf("\n\n Student Details Given  => ");

    printf("\n Roll No        : %d",Std1.Roll_No);
    printf("\n Student Name   : %s",Std1.SName);
    printf("\n Percentage     : %0.2f",Std1.Per);
    printf("\n Course         : %s",Std1.Course);
    printf("\n Grade          : %c",Std1.Grade);


    getch();
    return 0;
}


