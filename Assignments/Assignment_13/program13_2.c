//Write aprogram which accepts number from user and return the count of Odd digits
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CountOdd
//  Description  : accepts number from user and return the count of Odd digits
//  Input        : Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0) // Updater
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit % 2 != 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}