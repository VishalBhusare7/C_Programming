//Write a program which accept string from user and accept one charecter.
//Return frequency of that charecter.
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CountChar
//  Description  : program which accept string and charecter from user and return frequency of that charecter
//  Input        : String , Charecter
//  Output       : Integer
//  Date         : 09/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
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

    iRet = CountChar(Arr, cValue);

    printf("Charecter Frequency is : %d",iRet);

    return EXIT_SUCCESS;
}