//Accept charecter from and check whether it is capital or not (A-Z)
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkCapital
//  Description  : Accept charecter from and check whether it is capital or not (A-Z)
//  Input        : Charecter
//  Output       : String
//  Date         : 10/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Capital Charecter ");
    }
    else
    {
        printf("It Is Not a Capital Charecter");
    }

    return EXIT_SUCCESS;
}