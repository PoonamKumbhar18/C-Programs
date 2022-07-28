#include<stdio.h>
#include<conio.h>

int main()
{
        char Letter = 0;

            printf("\n Enter Character to Get Message = ");
            Letter = getch();

            switch( Letter )
            {
                    case 'A':
                    case 'a':
                    case 'B':
                    case 'b':
                    case 'C':
                    case 'c':
                    case 'D':
                    case 'd':
                                printf("\n Entered Letter is VOWEL ");
                                break;

                default:
                            printf("\n Invalid Character, No Message");

        }
        printf("\n\n Thanks For Input...");

        getch();
        return 0;
}
