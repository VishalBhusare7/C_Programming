//write a program which accepts number from user and return difference between summation of all factors and non factors
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: FactDiff
//  Description  : accepts number from user and return difference between summation of all factors and non factors
//  Input        : Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int FActDiff(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0;

    for(iCnt = iNo-1; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FActDiff(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}