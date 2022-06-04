#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[20] = {'\0'};
    char CpyName[20] = {};
    int i = 0;

    puts("\n Enter a string : ");
    gets(Name);

    while(Name[i] != '\0')
    {
        CpyName[i] = Name[i];
        i++;
    }

    CpyName[i] = '\0';

    printf("\n Given String is = %s .",Name);

    printf("\n Copied to New String is = %s .",CpyName);

    _getch();
    return 0;
}
