#include<stdio.h>
#include<conio.h>

int main()
{
        char Name[20] ={'\0'};
        int i = 0;

        printf("\n Enter a string : ");
        gets(Name);

        while(Name[i] != '\0')
        {
            if(Name[i] >= 'A' && Name[i] <= 'Z')
            {
                    Name[i] = Name[i] + 32;
            }
            else if(Name[i] >= 'a' && Name[i] <= 'z')
            {
                    Name[i] = Name[i] - 32;
            }
            i++;
        }

        printf("\n Given String is after Capitalization = %s.", Name);
         printf("\n Given String after conversion from capital to small = %s.", Name);


        _getch();
        return 0;

}
