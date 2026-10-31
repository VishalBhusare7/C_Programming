//Accept amount in US dollar and return it's Corresponding value in Indian currency.Consider 1$ as 70₹
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: DollarToINR
//  Description  : Accept amount in US dollar and return it's Corresponding value in Indian currency
//  Input        : Integer
//  Output       : Integer
//  Date         : 31/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iCon = 0;

    if(iNo < 0)         //Filter
    {
        return EXIT_FAILURE;
    }

    return iCon = iNo * 70;    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    if(iRet == EXIT_FAILURE)
    {
        printf("Invalid Amount \n");
    }
    else
    {
        printf("Value in INR is : %d",iRet);
    }

    return EXIT_SUCCESS;
}