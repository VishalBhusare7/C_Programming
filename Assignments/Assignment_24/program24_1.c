//Write a program which accept string from user and accept one charecter.
//Check whether that charecter is present in string or not.
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkChar
//  Description  : program which accept string and charecter and Check whether that charecter is present in String or not
//  Input        : String , Charecter
//  Output       : String
//  Date         : 09/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    BOOL bResult = FALSE;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            bResult = TRUE;
            return bResult;
        }   
        *str++;
    }
    return bResult;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Your String : \n");
    scanf("%[^'\n']s",&Arr);
    
    printf("Enter the Charecter : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Charecter Found \n");
    }
    else
    {
        printf("Charecter Not Found \n");
    }

    return EXIT_SUCCESS;
}