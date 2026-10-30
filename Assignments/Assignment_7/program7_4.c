//Write a program which accepts N from user and print all odd numbers up to N
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : accepts N from user and print all odd numbers up to N
//  Input        : Integer
//  Output       : Integer
//  Date         : 30/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt <= iNo)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    
    return EXIT_SUCCESS;
}