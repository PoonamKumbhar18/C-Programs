#include<stdio.h>
#include<conio.h>

int main()
{
        char Letter = 0;

            printf("\n Enter Character For Vowel check = ");
            Letter = getch();

            switch( Letter )
            {
                    case 'A':
                    case 'a':
                    case 'E':
                    case 'e':
                    case 'I':
                    case 'i':
                    case 'O':
                    case 'o':
                    case 'U':
                    case 'u':
                                printf("\n Entered Letter is VOWEL ");
                                break;

                default:
                            printf("\n Entered Letter is Not VOWEL");

        }
        printf("\n\n Thanks For Input...");

        getch();
        return 0;
}
