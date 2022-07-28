#include<stdio.h>
#include<conio.h>

int main()
{
        char Letter = 0;

        UP :
            printf("\n Enter Character to Get Message = ");
            scanf("%c",&Letter);

        switch( Letter )
        {
                case 'A':
                            printf("\n Welcome");
                            break;
                case 'a':
                            printf("\n Welcome");
                            break;
                case 'B':
                            printf("\n Good By");
                            break;
                case 'b':
                            printf("\n Good By");
                            break;
                case 'C':
                            printf("\n Have a nice day");
                            break;
                case 'c':
                            printf("\n Have a nice day");
                            break;
                case 'D':
                            printf("\n Good Day");
                            break;
                case 'd':
                            printf("\n Good Day");
                            break;
                default:
                            printf("\n Invalid Character, No Message");
                            break;

        }
        printf("\n\n Thanks For Input...");

        getch();
        return 0;
}
