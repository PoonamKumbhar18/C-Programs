#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i = 0, Values[5] = {0};

    for(i = 0; i < 5; i++)     ///Accepting Array Element
    {
        printf("Enter Element No %d = ", i+1 );
        scanf("%d",&Values[i]);
    }


    printf("\n PRESS KEY TO MOVE AHEAD.");
    getch();


    printf("\n\n Element  in Array are => \n\n");

    for(i = 0; i < 5; i++)   /// Displaying Array Element
    {
        printf("\n Value Of %d Element = %d", i+101,Values[i]);
    }


    getch();
    return 0;

}
