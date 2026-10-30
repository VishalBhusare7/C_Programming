//Write a program to find factorial of given number
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Factorial
//  Description  : program to find factorial of given number
//  Input        : Integer
//  Output       : Integer
//  Date         : 30/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    if(iNo < 0)         //Updater
    {
        iNo = -iNo;
    }

    int iCnt = 0, iFact = 1;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is : %d",iRet);

    return EXIT_SUCCESS;
}