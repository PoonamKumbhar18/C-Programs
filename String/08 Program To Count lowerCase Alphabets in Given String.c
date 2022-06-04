#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[20] = {};
    int i = 0, LowCnt = 0;

    printf("\n Enter Your Name = ");
    gets(Name);

    while(Name[i] != '\0')
    {
        if(Name[i] >= 'a' && Name[i] <='z')
        {
            LowCnt++;
        }

        i++;
    }

    printf("\n Lower Case Alphabets Count in Given Name is = %d .",LowCnt);

    _getch();
    return 0;
}
