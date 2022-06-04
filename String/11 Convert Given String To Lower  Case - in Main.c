#include<stdio.h>
#include<conio.h>

int main()
{
        char Name[20] ={'\0'};
        int i = 0;

        printf("\n Enter a string : ");
        gets(Name);

        while(Name[i] != '\0')
        {
            if(Name[i] >= 'A' && Name[i] <= 'Z')
            {
                    Name[i] = Name[i] + 32;
            }
            i++;
        }

        printf("\n Given String after conversion from capital to small = %s\n.", Name);

        _getch();
        return 0;

}
