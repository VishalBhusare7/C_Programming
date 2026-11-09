//write a program which accept string from user and count number of white spaces
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CountWhite
//  Description  : program which accept string from user and count number of white spaces
//  Input        : String
//  Output       : Integer
//  Date         : 09/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void CountWhite(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;    
        }
        *str++;
    }
    printf("%d",iCnt);
}

int main()
{
    char Arr[20];

    printf("Enter Your String : \n");
    scanf("%[^'\n']s",&Arr);

    CountWhite(Arr);

    return EXIT_SUCCESS;
}