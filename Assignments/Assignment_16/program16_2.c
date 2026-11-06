//Accept number of rows and number of columns from user and display below pattern
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accept number of rows and number of columns from user and display below patter
//  Input        : Integer , Integer
//  Output       : Charecter
//  Date         : 05/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if((i % 2) != 0)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                printf("%c\t",ch);
            }
            printf("\n");
        }
        else
        {
            for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
            {
                printf("%c\t",ch);
            }
            printf("\n");
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and Columns : \n");
    scanf("%d   %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}