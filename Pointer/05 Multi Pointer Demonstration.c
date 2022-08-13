#include<stdio.h>
#include<conio.h>

int main()
{
    int No =21;
    int *p =&No;
    int **q = &p;
    int ***m = &q;
    int ****x = &m;
    int *****r = &x;

    printf("\n No = %d",No);    ///21
    printf("\n p = %d",&p);     ///6422032
    printf("\n q = %d",&q);     ///6422024
    printf("\n m = %d",&m);     ///6422016
    printf("\n x = %d",&x);     ///6422008
    printf("\n r = %d",&r);     ///6422000

    printf("\n ===================\n\n");


    printf("\n %d",No);         ///21
    printf("\n %d",&No);        ///6422044
    printf("\n %d",&p);         ///6422032
    printf("\n %d",*p);         ///21
    printf("\n %d",**r);        ///6422024
    printf("\n %d",**(&m));     ///6422032
    printf("\n %d",&(***x));    ///6422032
    printf("\n %d",****r);      ///6422044
    printf("\n %d",&(**q));     ///6422044
    printf("\n %d",***(&r));    ///6422024
    printf("\n %d",**q);        ///21
    printf("\n %d",***(&q));    ///21

    getch();
    return 0;
}
