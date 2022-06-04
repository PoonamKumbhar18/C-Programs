#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[20] = {};
    int i = 0, vCnt = 0;

    printf("\n Enter Your Name = ");
    gets(Name);

    while(Name[i] != '\0')
    {
        if(Name[i] == 'a' || Name[i] == 'e' || Name[i] == 'i' || Name[i] == 'o' || Name[i] == 'u' || Name[i] == 'A' || Name[i] == 'E' || Name[i] == 'I' || Name[i] == 'O' || Name[i] == 'U')
        {
            vCnt++;
        }
        i++;

    }

    printf("\n Vowels Count in Given Name is = %d.", vCnt);

    _getch();
    return 0;
}
