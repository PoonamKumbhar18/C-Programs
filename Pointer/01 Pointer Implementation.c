#include<stdio.h>
#include<conio.h>


int main()
{
    int No =21, Num =55;

    int *Ptr1 = &No;
    int *Ptr2 = &No;

    printf("\n Value of No =%d",No);
    printf("\n Address of No = %d",&No);
    printf("\n Values of No using its Pointer Ptrl = %d",*Ptr1);
    printf("\n Address Of No Using Ptr1 = %d", Ptr1);
    printf("\n Address Of Ptr1 = %d",&Ptr1);

    printf("\n\n Value of Num =%d",Num);
    printf("\n Address of Num = %d",&Num);
    printf("\n Values of Num using its Pointer Ptr2 = %d",*Ptr2);
    printf("\n Address Of Num Using Ptr2 = %d", Ptr2);
    printf("\n Address Of Ptr2 = %d",&Ptr2);





    getch();
    return 0;
}
