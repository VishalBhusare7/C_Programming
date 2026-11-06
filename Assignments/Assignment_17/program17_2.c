//Accept number of rows and number of columns from user and display bellow pattern
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accept number of rows and number of columns from user and display below patter
//  Input        : Integer , Integer
//  Output       : integer
//  Date         : 05/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCntEven = 0, iCntOdd = 0;

    for(i = 0; i < iRow; i++)
    {
        iCntEven = 2, iCntOdd = 1;
        
        for(j = 0; j < iCol; j++)
        {
            if( i % 2 == 0)
            {
                printf("%d\t",iCntEven);
                iCntEven = iCntEven + 2;
            }
            else
            {
                printf("%d\t",iCntOdd);
                iCntOdd = iCntOdd + 2;
            }
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