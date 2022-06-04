#include<stdio.h>
#include<conio.h>

int main()
{

    char Name[20] ={'\0'};
    char RevName[20] = {};
    int i = 0, j = 0;

    printf("\n Enter a string : ");
    gets(Name);

    while(Name[i] != '\0')
    {
            i++;
    }
    i--;

    while(i >=0)
    {
       RevName[j] = Name[i];

       i--;
       j++;
    }


    printf("\n Given String is = %s .",Name);
    printf("\n Reverse String is = %s .",RevName);

    -getch();
    return 0;
}
