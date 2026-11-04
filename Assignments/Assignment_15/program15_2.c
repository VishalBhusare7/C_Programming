//write a program which accepts one number from user and check whether that number is greater than 100 or not
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkGreater
//  Description  : accepts one number from user and check whether that number is greater than 100 or not
//  Input        : Integer
//  Output       : String
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        printf("Greater \n");
    }
    else
    {
        printf("Smaller");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue); 

    ChkGreater(iValue);

    return EXIT_SUCCESS;
}