//Write a program which accept string from user and count number of small charecters
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CountSmall
//  Description  : program which accept string from user and count number of small charecters
//  Input        : String
//  Output       : Integer
//  Date         : 11/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(Arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}