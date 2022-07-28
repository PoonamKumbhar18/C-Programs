#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Array(int Num[], int);
void Display_Array(int Arr[], int);
int Find_Min(int Num[], int);


int main()
{
    int Min=0, values[5]={0};

    Accept_Array(values,5);

    printf("\n Back To Main() \n PRESS KEY TO MOVE AHEAD.");
    getch();

    Display_Array(values,5);

    Min = Find_Min(values,5);

    printf("\n Minimum Element in Array = %d", Min);

    getch();
    return 0;

}

void Accept_Array(int Num[], int Size)
{
    int i=0;

    printf("\n Inside Accept Element =>\n");

    for(i = 0; i < Size; i++ )
    {
        printf("\n Enter Element No %d =",i+1);
        scanf("%d",&Num[i]);
    }
    return;
}


void Display_Array(int Arr[], int Size)
{
    int i=0;

    printf("\n Element in Array Inside Display Function =>\n\n");

    for(i=0; i<Size; i++ )
    {
        printf("\n Value Of %d Element = %d.",i+101,Arr[i] );

    }
    return;
}


int Find_Min(int Num[], int Size)
{
    int i=0, Res=0;

    printf("\n Inside Min Function =>\n");


    while(i < Size)
    {
        if((i==0) || (Res > Num[i]))
        {
            Res = Num[i];
        }
        i++;
    }

    return Res;

}
