#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {};
    int i = 0;

    puts("\n Enter a string : ");
    gets(cSrc);

    for( ; cSrc[i] != '\0'; i++);

    printf("\n Length of given string is = %d",i);


    _getch();
    return 0;
}
