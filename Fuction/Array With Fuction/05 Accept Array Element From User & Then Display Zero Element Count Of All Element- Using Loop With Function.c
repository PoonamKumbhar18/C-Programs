#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5

void Accept_Array(int Num[]);
void Display_Array(int Arr[]);
int find_Count(int Num[]);


int main()
{
    int Even = 0, Odd = 0, Zero = 0, Count = 0, Values[5]={0};

    Accept_Array(Values);

    printf("\n Back To main() \n PRESS KEY TO MOVE AHEAD.");

    getch();

    Display_Array(Values);

    Count = find_Count(Values);

    //printf("\n *******************************$$$$**************************\n");

    //printf("\n\n Zero Element in Array = %d", Zero);
    //printf("\n\n Even Element in Array = %d", Even);
    //printf("\n\n Odd Element in Array = %d", Odd);


    getch();
    return 0;
}

void Accept_Array(int Num[])
{
    int i = 0;

    printf("\n Inside Accept Element = \n");

    for(i=0; i<size; i++ )
    {
        printf("\n Enter Element No %d = ", i+1);
        scanf("%d",&Num[i]);
    }

    return;
}

void Display_Array(int Arr[])
{
    int i = 0;

    printf("\n Element in Array Inside Display Function => \n\n");

    for(i=0; i<size; i++ )
    {
        printf("\n value of %d Element =%d.", i+101,Arr[i]);

    }

    return;
}


find_Count(int Num[])
{
    int i=0, Ecnt = 0, Ocnt = 0, Zcnt = 0;

    printf("\n\n Inside Count Function => \n");

    for(i=0; i<size; i++)
    {
        if(Num[i]==0)
        {
            Zcnt++;
        }
        else if(Num[i]%2 == 0)
        {
            Ecnt++;
        }
        else if(Num[i]%2 == 1)
        {
            Ocnt++;
        }
    }

    printf("\n Zero Count = %d", Zcnt);
    printf("\n Even Count = %d", Ecnt);
    printf("\n Odd Count = %d", Ocnt);


    return Zcnt;
    return Ecnt;
    return Ocnt;

}
