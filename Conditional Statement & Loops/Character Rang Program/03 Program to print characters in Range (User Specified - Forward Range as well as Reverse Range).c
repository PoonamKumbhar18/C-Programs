#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0',  S_Char ='\0', E_Char = '\0';

        printf("\n Enter starting Character : ");
        S_Char = getche();

        printf("\n Enter Ending Character : ");
        E_Char = getche();

        if(S_Char < E_Char)
        {
            for(ch = S_Char ; ch <= E_Char ; ch++)
            {
                printf("\n %c", ch);
            }

        }
        else
        {
          for(ch = S_Char ; ch >= E_Char ; ch--)
            {
                printf("\n %c", ch);
            }

        }


        printf("\n\n Thanks");

        getch();
        return 0;
}




