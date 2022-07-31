#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21, *iPtr1 = &iNo, *iPtr2 = &iNo;


    printf("\n Value of iNo Using its Pointer iPtr1 =%d",*iPtr1);
    printf("\n Address of iNo Using iPtr1 =%d", &iPtr1);
    printf("\n Address of iPtr1 =%d", &iPtr1);

    printf("\n Value of iNo Using its Pointer iPtr1 =%d",*iPtr2);
    printf("\n Address of iNo Using iPtr2 =%d", &iPtr2);
    printf("\n Address of iPtr2 =%d", &iPtr2);
    getch();


    iNo =18;
    printf("\n***********************************************\n");

    printf("\n New Value of iNo Using its Pointer iPtr1 =%d",*iPtr1);
    printf("\n New Value of iNo Using its Pointer iPtr2 =%d",*iPtr1);
    printf("\n***********************************************\n");
    getch();
    *iPtr1 = 97;

    printf("\n New Value Of iNo =%d" ,iNo);
    printf("\n New Value of iNo Using its Pointer iPtr2 =%d",*iPtr2);
    printf("\n New Value of iNo Using its Pointer iPtr2 =%d",*iPtr2);
    printf("\n***********************************************\n");



    getch();
    return 0;
}
