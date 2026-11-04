//Write a program which accept number from user and return summation of its non factors
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: SumNonFact
//  Description  : accept number from user and return summation of its non factors   
//  Input        : Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}