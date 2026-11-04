//Write aprogram which accepts number from user and return the Multiplication of all digits 
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: MultDigits
//  Description  : accepts number from user and return the Multiplication of all digits
//  Input        : Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if(iNo < 0) // Updater
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}