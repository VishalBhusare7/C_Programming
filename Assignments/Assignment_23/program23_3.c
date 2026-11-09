//Write a program which accept string from user and toggle the case
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: strtogglex
//  Description  : program which accept string from user and toggle the case
//  Input        : String
//  Output       : Charecter Array
//  Date         : 09/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    while (*str != '\0')
    {
        if(*str > 64 && *str < 91)
        {
            *str = *str + 32;
            printf("%c",*str);
            *str++;
        }
        else if(*str > 95 && *str < 123)
        {
            *str = *str - 32;
            printf("%c",*str);
            *str++;
        }
        else
        {
            printf("%c",*str);
            *str++;
        }
    }
}

int main()
{
    char Arr[20];

    printf("Enter Your String : \n");
    scanf("%[^'\n']s",&Arr);

    strtogglex(Arr);

    return EXIT_SUCCESS;
}