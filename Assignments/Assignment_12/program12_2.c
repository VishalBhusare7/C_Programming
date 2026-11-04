//Write a program which accepts number from user and check whether it contains 0 in it or not
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkZero
//  Description  : accepts number from user and check whether it contains 0 in it or not
//  Input        : Integer
//  Output       : String
//  Date         : 03/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit == 0)
        {
            iCnt++;
        }
    }

    if(iCnt > 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero");
    }

    return EXIT_SUCCESS;
}