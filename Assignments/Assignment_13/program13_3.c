//Write aprogram which accepts number from user and return the count of digits in between 3 and 7 
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CountRange
//  Description  : accepts number from user and return the count of digits in between 3 and 7
//  Input        : Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
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
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}