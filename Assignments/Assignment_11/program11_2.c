//write a program which accepts range from user and display all even numbers in between that range 
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: RangeDisplayEven
//  Description  : accepts range from user and display all even numbers in between that range
//  Input        : Integer , Integer
//  Output       : Integer
//  Date         : 03/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range \n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        } 
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter start : \n");
    scanf("%d",&iValue1);
    
    printf("Enter End : \n");
    scanf("%d",&iValue2);
    
    RangeDisplayEven(iValue1, iValue2);
    
    return EXIT_SUCCESS;
}