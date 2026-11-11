//Accept charecter from user and check whether it is special symbol or not (!,@,#,$,%,^,&,*)
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkSpecial
//  Description  : Accept charecter from user and check whether it is special symbol or not (!,@,#,$,%,^,&,*)
//  Input        : Charecter
//  Output       : String
//  Date         : 11/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It Is a Special Charecter \n");
    }
    else
    {
        printf("It Is Not a Special Charecter \n");
    }

    return EXIT_SUCCESS;
}