//Write a program which accept string from user and accept onr charecter.
//return index of first occurence of that charecter.
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: FirstChar
//  Description  : program which accept string and charecter from user and return index of first occurence of that charecter
//  Input        : String , Charecter
//  Output       : Integer
//  Date         : 09/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iResult = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            return iResult;
        }
        iResult++;
        *str++;
    }
    return iResult = -1;   
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter Your String : \n");
    scanf("%[^\n]s",&Arr);

    printf("Enter the Charecter : \n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr, cValue);

    printf("Charecter Location is : %d",iRet);

    return EXIT_SUCCESS;
}