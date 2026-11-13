//Write a program which accept a string from user and count number of capital charecters
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CountCapital
//  Description  : program which accept a string from user and count number of capital charecters
//  Input        : String
//  Output       : Integer
//  Date         : 11/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
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

    iRet = CountCapital(Arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}