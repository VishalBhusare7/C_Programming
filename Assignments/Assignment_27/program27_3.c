/*
    Write a program which accept string from user and return difference between frequency of small charecters
    and frequency of capital charecters.
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Diffrence
//  Description  : program which accept string from user and return difference between frequency of small charecters
//  Input        : String
//  Output       : Integer
//  Date         : 11/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCnt--;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}