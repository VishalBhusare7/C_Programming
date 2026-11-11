//Accept charecter from user and check whether it is alphabet or not (A-Z a-z)
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChlAlpha
//  Description  : Accept charecter from user and check whether it is alphabet or not (A-Z a-z)
//  Input        : Charecter
//  Output       : String
//  Date         : 10/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It Is a Charecter");
    }
    else
    {
        printf("It Is Not a Charecter");
    }

    return EXIT_SUCCESS;
}