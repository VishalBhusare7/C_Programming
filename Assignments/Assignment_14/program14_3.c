//Write aprogram which accepts number from user and Display its non factors   
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: NonFact
//  Description  : accepts number from user and Display its non factors   
//  Input        : Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}