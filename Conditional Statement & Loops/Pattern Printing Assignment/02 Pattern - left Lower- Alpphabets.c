#include<Stdio.h>
#include<Conio.h>

int main()
{
    char ch = 'A';
    int i = 0, j = 0, X = 0;

    printf("\n Enter Row & Column Value = ");
    scanf("%d",&X);

    printf("\n\n Pattern is => \n\n");

    for( i = 1; i <= X; i++ )
    {
        for( ch = 'A' , j = 1; j <= X; j++, ch++)
        {
            if( i >= j )
            {
                    printf(" %c ",ch);

            }
            else
            {
                printf("   ");
            }

        }
        printf("\n");
    }

    printf("\n\n Thanks");
    getch();
    return 0;
}
