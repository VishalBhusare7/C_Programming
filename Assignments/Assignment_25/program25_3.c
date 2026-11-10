//Accept a charecter from user and check whether it is a digit or not (0-9)
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkDigit
//  Description  : Accept a charecter from user and check whether it is a digit or not (0-9)
//  Input        : Charecter
//  Output       : String
//  Date         : 10/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter The Charecter : \n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It Is a Digit ");
    }
    else
    {
        printf("It Is Not a Digit");
    }

    return EXIT_SUCCESS;
}