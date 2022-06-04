#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {};
    int Len = 0;

    puts("\n Enter a string : ");
    gets(cSrc);

    for(i = 0 ; cSrc[i] != '\0'; Len++);

    printf("\n Length of given string is = %d",Len);


    _getch();
    return 0;
}
