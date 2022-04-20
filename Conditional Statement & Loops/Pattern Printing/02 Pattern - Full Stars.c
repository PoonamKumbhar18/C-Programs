#include<Stdio.h>
#include<Conio.h>

int main()
{
    int i = 0, j = 0;

    printf("\n\n Pattern is => \n\n");

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 7; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n\n Thanks");
    getch();
    return 0;
}
