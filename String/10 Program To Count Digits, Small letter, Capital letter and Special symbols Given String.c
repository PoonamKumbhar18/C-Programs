#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[20] = {};
    int i = 0, dCnt = 0, CapCnt = 0, SmallCnt = 0, SpaceCnt = 0, SpCnt = 0;

    printf("\n Enter Your Name = ");
    gets(Name);

    while(Name[i] != '\0')
    {
        if( Name[i] == ' ' )
        {
            SpaceCnt++;
        }
        else if(Name[i] >= 'A' && Name[i] <='Z')
        {
            CapCnt++;
        }
        else if(Name[i] >= 'a' && Name[i] <= 'z')
        {
            SmallCnt++;
        }
        else if(Name[i] >= '0' && Name[i] <= '9')
        {
            dCnt++;
        }
        else
        {
            SpCnt++;
        }

        i++;
    }



    printf("\n Capital Letters Count in Given Name is = %d .",CapCnt);
    printf("\n Small Letters Count in Given Name is = %d .",SmallCnt);
    printf("\n Digit Count in Given Name is = %d .",dCnt);
    printf("\n Space Count in Given Name is = %d .",SpaceCnt);
    printf("\n Special Symbols Count in Given Name is = %d .",SpCnt);


    _getch();
    return 0;
}
