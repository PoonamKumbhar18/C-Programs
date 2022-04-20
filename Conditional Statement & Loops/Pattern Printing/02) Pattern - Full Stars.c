#include<Stdio.h>
#include<Conio.h>

int main()
{
    int i = 0, j = 0, R = 0, C = 0;

    printf("\n Enter Row Value = ");
    scanf("%d",&R);

    printf("\n Enter Column Value = ");
    scanf("%d",&C);

    printf("\n\n Pattern is => \n\n");

    for(i = 1; i <= R; i++)
    {
        for(j = 1; j <= C; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n\n Thanks");
    getch();
    return 0;
}
