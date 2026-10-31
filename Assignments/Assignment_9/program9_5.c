//Write a program which returns difference between even factorial and odd factorial of a given number
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: FactorialDiff
//  Description  : program which returns difference between even factorial and odd factorial of a given number
//  Input        : Integer
//  Output       : Integer
//  Date         : 31/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0, iFactEven = 1, iFactOdd = 1, iDeff = 0;

    if(iNo < 0)             //Updater
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iFactEven = iFactEven * iCnt;
        }
        else
        {
            iFactOdd = iFactOdd * iCnt;
        }
    }
    return iDeff = iFactEven - iFactOdd;
}

int main()
{
    int iVAlue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iVAlue);

    iRet = FactorialDiff(iVAlue);

    printf("Difference is : %d",iRet);

    return EXIT_SUCCESS;
}