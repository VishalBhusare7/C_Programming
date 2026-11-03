//write a program which accepts range from user and return additiom of all numbers in between that range 
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: RangeSum
//  Description  : accepts range from user and return additiom of all numbers in between that range 
//  Input        : Integer , Integer
//  Output       : Integer
//  Date         : 03/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if((iStart< 0) || (iEnd < 0))       //Filter
    {
        printf("Invalid Range \n");
        return -1;
    }
    else if(iStart > iEnd)
    {
        printf("Invalid Range \n");
        return -1;
    }
    else 
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter start : \n");
    scanf("%d",&iValue1);
    
    printf("Enter End : \n");
    scanf("%d",&iValue2);
    
    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        return EXIT_FAILURE;
    }
    else
    {
        printf("Addition is : %d",iRet);
    }

    return EXIT_SUCCESS;
}