//Accept number of rows and number of columns from user and display bellow pattern
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accept number of rows and number of columns from user and display bellow patter
//  Input        : Integer , Integer
//  Output       : integer
//  Date         : 05/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;
    iCnt =1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++, iCnt++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Columns : \n");
    scanf("%d   %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}