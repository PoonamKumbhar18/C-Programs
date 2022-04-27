#include<Stdio.h>
#include<Conio.h>

int main()
{

    int i = 0, j = 0, X = 0, No = 0;

    printf("\n Enter Row & Column Value = ");
    scanf("%d",&X);

    printf("\n\n Pattern is => \n\n");

    for(  No = 1, i = 1; i <= X; i++)
    {
        for( j = 1; j <= X; j++ )
        {

            if(  i >= j)
            {
                    printf(" %d ",No*7);
                    No++;

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
