#include<stdio.h>
#include<conio.h>

struct Student
{
    int Roll_No;
    char SName[24];
    float Per;
    char Course[16];
};

int main()
{
    int Num;
    struct Student Std1;

    printf("size of Int variable = %d", sizeof(Num));
    printf("\n\n size of Structure Object =%d", sizeof(Std1));


    getch();
    return 0;
}
