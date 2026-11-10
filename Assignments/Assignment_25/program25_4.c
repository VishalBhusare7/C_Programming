//Accept a charecter from user and check whether it is small case or not (a-z)
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkSmall
//  Description  : Accept a charecter from user and check whether it is small case or not (a-z)
//  Input        : Charecter
//  Output       : String
//  Date         : 10/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter The Charecter : \n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It Is a Small Case Charecter");
    }
    else
    {
        printf("It Is Not A Small Case Charecter");
    }

    return EXIT_SUCCESS;
}