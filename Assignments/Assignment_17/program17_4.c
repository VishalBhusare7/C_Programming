//Accept number rows and number of columns from user and display below pattern
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accept number of rows and number of columns from user and display below patter
//  Input        : Integer , Integer
//  Output       : integer
//  Date         : 06/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

///////////////////////////////////////////////////////////////////////////////////////
// for(i = 1; i <= iRow; i++)
// {
//     if(i % 2 == 0)
//     {
//         for(j = 1; j <= iCol; j++)
//         {
//             printf("%d\t",j);
//         }
//     }
//     else
//     {
//         for(j = -1;j >= -iCol; j--)
//         {
//             printf("%d\t",j);
//         }
//     }
//     printf("\n");
// }
///////////////////////////////////////////////////////////////////////////////////////

    for(i = 1; i <= iRow; i++)
    {
        iCnt = 1;
        if(i % 2 == 0)
        {
            iCnt = -iCnt;
        }

        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iCnt);
                iCnt--;
            }
            else
            {
                printf("%d\t",iCnt);
                iCnt++;
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