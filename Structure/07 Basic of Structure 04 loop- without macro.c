#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RollNo;
    char Name[20];
    char City[8];
    float Per;
};

int main()
{
    int i=0;

    struct student stud[1];

    printf("\n Accepting Student Details => \n");

    for(i = 0; i <= 1 ; i++)
    {
        printf("\n Enter %d Student Details => ", i + 101);
        printf("\n Enter Roll No :");
        scanf("%d",&stud[i].RollNo);



        printf("\n Enter Name :");
        scanf("% [^\n]",&stud[i].Name);
        fflush(stdin);

        printf("\n Enter City :");
        scanf("% [^\n]",&stud[i].City);
        fflush(stdin);

        printf("\n Enter Percentage :");
        scanf("%f",&stud[i].Per);

        printf("\n*************************$$$$************************");

    }

    getch();

    printf("\n  Displaying Student Details =>\n");

    for(i = 0; i < 1; i++)
    {
        printf("\n %d Student Details Given are => \n\n\t Roll No - %d.\n\t Name -%s.\n\t City - %s.\n\t Percentage - %0.2f.\n",i+1,stud[i].RollNo,stud[i].Name,stud[i].City,stud[i].Per);
    }

    getch();
    return 0;
}
