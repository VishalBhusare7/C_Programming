//Write a Program which accept Number from User and Print Even Factors of that Number
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayEvenFactor
//  Description  : accept Number from User and Print Even Factors of that Number
//  Input        : Integer
//  Output       : Integer
//  Date         : 19/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return EXIT_SUCCESS;
}