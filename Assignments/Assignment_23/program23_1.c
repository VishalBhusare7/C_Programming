//Write a program which accept string from user and convert it into lower case
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: strlwrx
//  Description  : program which accept string from user and convert it into lower case
//  Input        : String
//  Output       : Charecter Array
//  Date         : 09/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str > 64 && *str < 91)
        {
            *str = *str + 32;
            str++;
        }
        else
        {
            str++;
        }
    }
}

int main()
{
    char Arr[20];

    printf("Enter Your String : \n");
    scanf("%[^'\n']s",&Arr);

    strlwrx(Arr);

    printf("Modifield String is : %s",Arr);

    return EXIT_SUCCESS;
}