//write a Program which accept number from user and print even factors of that number
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayFactors
//  Description  : accept number from user and print even factors of that number
//  Input        : Integer
//  Output       : Integer
//  Date         : 19/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if((iNo % iCnt) == 0)
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

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}