//write a program which accepts one number from user and print that number of even numbers on screen
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: PrintEven
//  Description  : accepts one number from user and print that number of even numbers on screen
//  Input        : Integer
//  Output       : Integer
//  Date         : 19/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}