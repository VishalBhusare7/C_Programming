//Write a program which accepts 2 numbers from user and check whether that number is equal or not
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkEqual
//  Description  : accepts 2 numbers from user and check whether that number is equal or not
//  Input        : Integer , Integer
//  Output       : String
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter 2 Numbers : \n");
    scanf("%d %d",&iValue1 , &iValue2);

    bRet = ChkEqual(iValue1 , iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}