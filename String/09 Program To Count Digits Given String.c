#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[20] = {};
    int i = 0, dCnt = 0;

    printf("\n Enter Your Name = ");
    gets(Name);

    while(Name[i] != '\0')
    {
        if(Name[i] >= '0' && Name[i] <='9')
        {
            dCnt++;
        }

        i++;
    }

    printf("\n Digit Count in Given Name is = %d .",dCnt);

    _getch();
    return 0;
}
