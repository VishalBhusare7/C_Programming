//Write a program which accept number from user and print that number of $ & * on screen
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Pattern 
//  Description  : accept number from user and print that number of $ & * on screen
//  Input        : Integer
//  Output       : Special Symbol
//  Date         : 30/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        printf(" $ * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}