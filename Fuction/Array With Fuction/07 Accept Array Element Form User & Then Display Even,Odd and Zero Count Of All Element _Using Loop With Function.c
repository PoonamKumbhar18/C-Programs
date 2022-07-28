#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

void Accept_Array(int Num[]);
void Display_Array(int Arr[]);
int Find_Evencount(int Num[]);
int Find_Oddcount(int Num[]);
int Find_Zerocount(int Num[]);



int main()
{
    int Odd=0, Zero=0, Even=0, values[5]={0};

    Accept_Array(values);

    printf("\n Back To Main() \n PRESS KEY TO MOVE AHEAD.");
    getch();

    Display_Array(values);

    Even=Find_Evencount(values);

    Odd=Find_Oddcount(values);

    Zero=Find_Zerocount(values);

    printf("\n\n***********************$$$$$$$$$******************************\n");

    printf("\n  Count Of Even Element in Array = %d", Even);

    printf("\n\n***********************$$$$$$$$$******************************\n");

    printf("\n\n***********************$$$$$$$$$******************************\n");

    printf("\n Count Of Odd Element in Array = %d", Odd);

    printf("\n\n***********************$$$$$$$$$******************************\n");

    printf("\n\n***********************$$$$$$$$$******************************\n");

    printf("\n Count Of Zero Element in Array = %d", Odd);

    printf("\n\n***********************$$$$$$$$$******************************\n");



    getch();
    return 0;

}

void Accept_Array(int Num[])
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


void Display_Array(int Arr[])
{
    int i=0;

    printf("\n Element in Array Inside Display Function =>\n\n");

    for(i=0; i<Size; i++ )
    {
        printf("\n Value Of %d Element = %d.",i+101,Arr[i] );

    }
    return;
}
int Find_Evencount(int Num[])
{
    int i=0, Res=0;

    printf("\n\n Inside Even Function =>\n");


    for(i = 0 ; i < Size ; i++ )
    {
        if(Num[i]% 2 == 0)
        {
            Res++;
        }
    }
    printf("\n Count Of Even = %d",Res);

    return Res;

}


int Find_Oddcount(int Num[])
{
    int i=0, Res=0;

    printf("\n\n Inside Odd Function =>\n");


    for(i = 0 ; i < Size ; i++ )
    {
        if(Num[i]% 2 == 1)
        {
            Res++;
        }
    }
    printf("\n Count Of Odd = d",Res);

    return Res;

}
int Find_Zerocount(int Num[])
{
    int i=0, Res=0;

    printf("\n\n Inside Zero Function =>\n");


    for(i = 0 ; i < Size ; i++ )
    {
        if(Num[i] == 0)
        {
            Res++;
        }
    }
    printf("\n Count Of Zero = %d",Res);

return Res;

}

