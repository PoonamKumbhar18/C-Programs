#include<Stdio.h>
#include<Conio.h>

int main()
{
    char ch = 'A';
    int i = 0, j = 0, X = 0;

    printf("\n Enter Row & Column Value = ");
    scanf("%d",&X);

    printf("\n\n Pattern is => \n\n");

    for( ch = 'A', i = 1; i <= X; i++)
    {
        for(  j = 1; j <= X; j++ )
        {

            if(  j == 1;i >= j )
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
