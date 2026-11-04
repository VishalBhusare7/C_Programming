//Write aprogram which accepts number from user and return difference between summation of even digits and summation of odd digits
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CountDiff
//  Description  : accepts number from user and return difference between summation of even digits and summation of odd digits
//  Input        : Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    if(iNo < 0) // Updater
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
    }
    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}