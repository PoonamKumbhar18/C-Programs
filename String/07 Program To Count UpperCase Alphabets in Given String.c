#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[20] = {};
    int i = 0, upCnt = 0;

    printf("\n Enter Your Name = ");
    gets(Name);

    while(Name[i] != '\0')
    {
        if(Name[i] >= 'A' && Name[i] <='Z')
        {
            upCnt++;
        }

        i++;
    }

    printf("\n Upper Case Alphabets Count in Given Name is = %d .",upCnt);

    _getch();
    return 0;
}
