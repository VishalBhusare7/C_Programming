//write a program which accepts range from user and display all numbers in between that range in reverse order
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: RangeDisplayRev
//  Description  : accepts range from user and display all numbers in between that range in reverse order
//  Input        : Integer , Integer
//  Output       : Integer
//  Date         : 03/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range \n");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter start : \n");
    scanf("%d",&iValue1);
    
    printf("Enter End : \n");
    scanf("%d",&iValue2);
    
    RangeDisplayRev(iValue1, iValue2);
    
    return EXIT_SUCCESS;
}