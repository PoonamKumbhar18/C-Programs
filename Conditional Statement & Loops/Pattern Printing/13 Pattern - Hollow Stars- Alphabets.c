#include<Stdio.h>
#include<Conio.h>

int main()
{
    char ch = 'A';
    int i = 0, j = 0, X = 0;

    printf("\n\n Pattern is => \n\n");
    scanf("%d",&X);

    for( char ch = 'A',i = 1; i <= X; i++)
    {
        for(  j = 1; j <= X; j++ )
        {
            if( i == 1 || i == 5 || j == 1 || j == 5 )
            {
                    printf(" %c ",ch);

            }
            else
            {
                printf("   ");
            }
            ch++;

        }
        printf("\n");
    }

    printf("\n\n Thanks");
    getch();
    return 0;
}
