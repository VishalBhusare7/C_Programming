//Write a program which accepts three numbers and print its multiplication
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Multiply
//  Description  : accepts three numbers and print its multiplication
//  Input        : Integer , Integer , Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if((iNo1== 0) && (iNo2== 0) && (iNo3== 0))
    {
        return 0;
    }
    
    if(iNo1 > 0)
    {
        iMult = iMult * iNo1;
    }

    if (iNo2 > 0)
    {
        iMult = iMult * iNo2;
    }

    if(iNo3 > 0)
    {
        iMult = iMult * iNo3;
    }

    return iMult;
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter Three Numbers : \n");
    scanf("%d   %d  %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}